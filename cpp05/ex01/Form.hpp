#ifndef FORM_HPP
# define FORM_HPP

# define RESET	"\e[0m"
# define RED	"\e[1;31m"
# define BLUE	"\e[1;34m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeSign;
	const int			_gradeExec;

	public:
	Form(std::string name, int sign, int exec);
	~Form();
	Form(const Form &dup);
	Form &operator=(const Form &dup);

	const std::string 	getName();
	int					getGradeSign();
	int					getGradeExec();
	bool				isSigned() const;
	void				beSigned(Bureaucrat &check);

	class	GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return (RED "Required Grade is too high" RESET);
		}
	};

	class	GradeTooLowException : public std::exception
	{
		const char* what() const throw()
		{
			return (RED "Required Grade is too low" RESET);
		}
	};
};

std::ostream &operator<<(std::ostream &out, Form &c);

#endif
