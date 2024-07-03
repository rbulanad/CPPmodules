#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# define RESET	"\e[0m"
# define RED	"\e[1;31m"
# define BLUE	"\e[1;34m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include <fstream>

class	ShrubberyCreationForm : public AForm
{
	private:
	std::string	_target;

	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string _target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &dup);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &dup);

	//functions
	void	doStuff() const;
	void	setTarget(std::string target);
	AForm*	clown();
};

#endif
