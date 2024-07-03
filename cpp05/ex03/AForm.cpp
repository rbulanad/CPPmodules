#include "AForm.hpp"

AForm::AForm() : _name("ohoh"), _gradeSign(150), _gradeExec(150)
{
	std::cout << "AForm default construct" << std::endl;
}

AForm::AForm(std::string name, int sign, int exec) : _name(name), _gradeSign(sign), _gradeExec(exec)
{
	std::cout << GREEN "AForm Construct" RESET << std::endl;
	if (sign < 1 || exec < 1)
		throw (AForm::GradeTooHighException());
	else if (sign > 150 || exec > 150)
		throw (AForm::GradeTooLowException());
	_signed = false;
}

AForm::~AForm()
{
	std::cout << YELO "AForm Destruct" RESET << std::endl;
}

AForm::AForm(const AForm &dup): _gradeSign(getGradeSign()), _gradeExec(getGradeExec())
{
	std::cout << GREEN "AForm Copy Construct" RESET << std::endl;
	*this = dup;
}

AForm &AForm::operator=(const AForm &dup)
{
	if (this != &dup)
	{
		this->_signed = dup.isSigned();
	}
	return (*this);
}

const std::string AForm::getName() const
{
	return _name;
}

int	AForm::getGradeSign()
{
	return _gradeSign;
}

int AForm::getGradeExec()
{
	return _gradeExec;
}

bool AForm::isSigned() const
{
	return _signed;
}

void AForm::beSigned(Bureaucrat &check)
{
	if (check.getGrade() <= _gradeSign)
		_signed = true;
	else
		throw (AForm::GradeTooLowException());
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw (AForm::NotSignedException());
	if (executor.getGrade() > this->_gradeExec)
		throw (AForm::GradeTooLowException());
	doStuff();
}

void		AForm::setTarget(std::string target)
{
	(void)target;
}

std::ostream &operator<<(std::ostream &out, AForm &c)
{
	out << BLUE "\n/////////FORM////////////" << "\nAForm name: " << c.getName() << "\nGrade required to sign: " << c.getGradeSign() << "\nIs the form signed ?: " << c.isSigned() << "\nGrade required to execute: " <<  c.getGradeExec() << "\n/////////////////////////\n" RESET;
	return (out);
}
