#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# define RESET	"\e[0m"
# define RED	"\e[1;31m"
# define BLUE	"\e[1;34m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"
# define WHIT	"\e[1;37m"

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
	std::string	_target;

	public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string _target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &dup);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &dup);

	//functions
	void	doStuff() const;
};

#endif
