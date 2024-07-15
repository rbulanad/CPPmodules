#ifndef SPAN_HPP
#define SPAN_HPP

# define BRED	"\033[1;31m"
# define BGRN	"\033[1;32m"
# define BYEL	"\033[1;33m"
# define BBLU	"\033[1;34m"
# define BMAG	"\033[1;35m"
# define BCYN	"\033[1;36m"
# define BWHT	"\033[1;37m"
# define CRESET	"\033[0m"

# include <vector>

class	Span
{
	private:
	unsigned int	_N;
	std::vector<unsigned int> vec;
	public:
	Span(unsigned int n);
	Span();
	~Span();
	Span(const Span &dup);
	Span &operator=(const Span &dup);

	//funcs
	void				addNumber(unsigned int i);
	unsigned int		shortestSpan();
	unsigned int		longestSpan();
	void				randomFill(unsigned int N);
	//exceptions
	class	LimitReached: public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};
	class	SpanUnfound: public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};
};

#endif
