#ifndef RPN_HPP
#define RPN_HPP

# define RESET	"\e[0m"
# define RED	"\e[1;31m"
# define GREEN	"\e[1;32m"
# define YELO	"\e[1;33m"
# define CYAN	"\e[1;36m"
# define MAG	"\e[1;35m"

# include <stack>
# include <iostream>
# include <sstream>
# include <cstdlib>

class	RPN
{
	private:
	public:
	RPN();
	~RPN();
	RPN(const RPN &dup);
	RPN &operator=(const RPN &dup);

	class	SyntaxError: public std::exception
	{
		public:
		const char*	what() const throw()
		{
			return (RED "Error: Syntax." RESET);
		}
	};
};

void	Parse(std::string line);
int		IsOperand(char c);
void	Calcul(std::string line);
void	Add(std::stack<int> &stak, char c);
void	Sub(std::stack<int> &stak, char c);
void	Mul(std::stack<int> &stak, char c);
void	Div(std::stack<int> &stak, char c);
int		ft_stoi(std::string & s);
#endif
