#ifndef AFORM_HPP
# define AFORM_HPP

# define RESET	"\e[0m"
# define RED	"\e[1;31m"
# define BLUE	"\e[1;34m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeSign;
	const int			_gradeExec;

	public:
	AForm(std::string name, int sign, int exec);
	~AForm();
	AForm(const AForm &dup);
	AForm &operator=(const AForm &dup);

	const std::string 	getName();
	int					getGradeSign();
	int					getGradeExec();
	bool				isSigned() const;
	virtual void		beSigned(Bureaucrat &check) const = 0 ;

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

std::ostream &operator<<(std::ostream &out, AForm &c);

#endif
