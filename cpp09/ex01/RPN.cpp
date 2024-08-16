#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &dup)
{
	*this = dup;
}

RPN &RPN::operator=(const RPN &dup)
{
	if (this != &dup) {}
	return *this;
}

int		IsOperand(char c)
{
	if (c == '+' || c == '-' || c == '/' || c == '*')
		return (1);
	return (0);
}

void	Parse(std::string line)
{
	if (line[0] < 48 || line[0] > 57) //1st char needs to be digit
		throw (RPN::SyntaxError());
	int	digit = 0;
	for(int i = 0; line[i] != '\0'; i++)
	{
		if (line[i] < 48 || line [i] > 57)
		{
			if (line[i] == ' ') //spaces accepted
			{
				digit = 0;
				continue ;
			}
			else if (IsOperand(line[i])) //skip operands
				continue ;
			else
				throw (RPN::SyntaxError());
		}
		digit++;
		if (digit > 1) //only 0 to 9 accepted
			throw (RPN::SyntaxError());
	}
}

void	Calcul(std::string line)
{
	std::stack<int> stak;
	for(int i = 0; line[i] != '\0'; i++)
	{
		if (line[i] > 47 && line[i] < 58)
			stak.push(atoi(&line[i]));
		else if (IsOperand(line[i]))
		{
			Add(stak, line[i]);
			Sub(stak, line[i]);
			Mul(stak, line[i]);
			Div(stak, line[i]);
		}
	}
	std::cout << stak.top() << std::endl;
	stak.pop();
}

void	Add(std::stack<int> &stak, char c)
{
	if (c != '+')
		return ;
	int	right = stak.top();
	stak.pop();
	int	left = stak.top();
	stak.pop();

	stak.push(left + right);
}

void	Sub(std::stack<int> &stak, char c)
{
	if (c != '-')
		return ;
	int	right = stak.top();
	stak.pop();
	int	left = stak.top();
	stak.pop();

	stak.push(left - right);
}

void	Mul(std::stack<int> &stak, char c)
{
	if (c != '*')
		return ;
	int	right = stak.top();
	stak.pop();
	int	left = stak.top();
	stak.pop();

	stak.push(left * right);
}

void	Div(std::stack<int> &stak, char c)
{
	if (c != '/')
		return ;
	int	right = stak.top();
	if (right == 0)
		throw (RPN::SyntaxError());
	stak.pop();
	int	left = stak.top();
	if (left == 0)
		throw (RPN::SyntaxError());
	stak.pop();

	stak.push(left / right);
}

int ft_stoi(std::string & s)
{
    int i;
    std::istringstream(s) >> i;
    return i;
}
