#include  "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name) //name initialized here bc "const"
{
	_grade = grade;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &dup)
{
	*this = dup;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &dup)
{
	if (this != &dup) {
		this->_grade = dup._grade;
		}
	return *this;
}

const std::string	Bureaucrat::getName()
{
	return _name;
}

int	Bureaucrat::getGrade()
{
	return _grade;
}

void	Bureaucrat::incr(int i)
{
	_grade -= i;
	if (_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decr(int i)
{
	_grade += i;
	if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());

}

std::ostream &operator<<(std::ostream &out, Bureaucrat &c)
{
	out << c.getName() << ", bureaucrat grade " << c.getGrade();
	return out;
}
