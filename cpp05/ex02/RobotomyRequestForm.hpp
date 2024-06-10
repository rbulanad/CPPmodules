#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# define RESET	"\e[0m"
# define RED	"\e[1;31m"
# define BLUE	"\e[1;34m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"
# define WHIT	"\e[1;37m"

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class	RobotomyRequestForm : public AForm
{
	private:
	std::string	_target;

	public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string _target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &dup);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &dup);

	//functions
	void	doStuff() const;
};

#endif
