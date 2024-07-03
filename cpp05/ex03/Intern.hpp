#ifndef INTERN_HPP
#define INTERN_HPP

# define RESET	"\e[0m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"
# define RED	"\e[1;31m"

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class	Intern
{
	private:
	AForm	*_tab[3];

	public:
	Intern();
	~Intern();
	Intern(const Intern &dup);
	Intern &operator=(const Intern &dup);

	AForm*	makeForm(std::string name, std::string target);

	class	InvalidName : public std::exception
	{
		const char* what() const throw()
		{
			return (RED "Invalid Form Name" RESET);
		}
	};
};

#endif
