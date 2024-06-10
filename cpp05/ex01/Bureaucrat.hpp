#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# define RESET	"\e[0m"
# define RED	"\e[1;31m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"

# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	private:
	const std::string	_name;
	int					_grade;

	public:
	Bureaucrat(int grade, std::string name);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &dup);
	Bureaucrat &operator=(const Bureaucrat &dup);

	const std::string	getName() const;
	int					getGrade() const;

	void	incr(int i);
	void	decr(int i);
	void	signForm(Form &check);

	class	GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return (RED "Grade is too high" RESET);
			}
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return (RED "Grade is too low" RESET);
			}
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &c);

#endif
