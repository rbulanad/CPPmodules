#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# define RESET	"\e[0m"
# define RED	"\e[1;31m"

# include <iostream>

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

	const std::string	getName();
	int					getGrade();

	void	incr(int i);
	void	decr(int i);

	class	GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return (RED "Grade is too high" RESET);
		}
	};

	class	GradeTooLowException : public std::exception
	{
		const char* what() const throw()
		{
			return (RED "Grade is too low" RESET);
		}
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &c);

#endif
