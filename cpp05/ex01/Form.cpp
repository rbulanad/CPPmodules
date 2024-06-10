#include "Form.hpp"

Form::Form(std::string name, int sign, int exec) : _name(name), _gradeSign(sign), _gradeExec(exec)
{
	std::cout << GREEN "Form Construct" RESET << std::endl;
	if (sign < 1 || exec < 1)
		throw (Form::GradeTooHighException());
	else if (sign > 150 || exec > 150)
		throw (Form::GradeTooLowException());
	_signed = false;
}

Form::~Form()
{
	std::cout << YELO "Form Destruct" RESET << std::endl;
}

Form::Form(const Form &dup): _gradeSign(getGradeSign()), _gradeExec(getGradeExec())
{
	std::cout << GREEN "Form Copy Construct" RESET << std::endl;
	*this = dup;
}

Form &Form::operator=(const Form &dup)
{
	if (this != &dup)
	{
		this->_signed = dup.isSigned();
	}
	return (*this);
}

const std::string Form::getName()
{
	return _name;
}

int	Form::getGradeSign()
{
	return _gradeSign;
}

int Form::getGradeExec()
{
	return _gradeExec;
}

bool Form::isSigned() const
{
	return _signed;
}

void Form::beSigned(Bureaucrat &check)
{
	if (check.getGrade() <= _gradeSign)
		_signed = true;
	else
		throw (Form::GradeTooLowException());
}

std::ostream &operator<<(std::ostream &out, Form &c)
{
	out << BLUE "\n/////////FORM////////////" << "\nForm name: " << c.getName() << "\nGrade required to sign: " << c.getGradeSign() << "\nIs the form signed ?: " << c.isSigned() << "\nGrade required to execute: " <<  c.getGradeExec() << "\n/////////////////////////\n" RESET;
	return (out);
}
