#include  "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name) //name initialized here bc "const"
{
	std::cout << GREEN "Bureaucrat Construct" RESET << std::endl;
	_grade = grade;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat()
{
	std::cout << YELO "Bureaucrat Destruct" RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &dup)
{
	std::cout << GREEN "Bureaucrat copy Construct" RESET << std::endl;
	*this = dup;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &dup)
{
	if (this != &dup)
	{
		_grade = dup.getGrade();
	}
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::incr(int i)
{
	_grade -= i;
	if (_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	std::cout << CYAN "" << _name << "'s grade has been to INCREASED to " << _grade << "" RESET << std::endl;
}

void	Bureaucrat::decr(int i)
{
	_grade += i;
	if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << CYAN "" << _name << "'s grade has been to DECREASED to " << _grade << "" RESET << std::endl;
}

void	Bureaucrat::signForm(AForm &check)
{
	if (check.isSigned())
		std::cout << check.getName() << " is already signed." << std::endl;
	else
		try {
			check.beSigned(*this);
			std::cout << getName() << " signed " << check.getName() << std::endl;
		}
		catch (std::exception & fail) {
			std::cout << getName() << " couldn't SIGN " << check.getName() << " because " << fail.what() << std::endl;
		}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try {
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception & fail) {
			std::cout << getName() << " couldn't EXECUTE " << form.getName() << " because " << fail.what() << std::endl;
	}
}
std::ostream &operator<<(std::ostream &out, Bureaucrat &c)
{
	out << c.getName() << ", bureaucrat grade " << c.getGrade();
	return out;
}
