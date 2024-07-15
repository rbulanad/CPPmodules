#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span(unsigned int n)
{
	_N = n;
}

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(const Span &dup)
{
	*this = dup;
}

Span &Span::operator=(const Span &dup)
{
	if (this != &dup) {}
	return *this;
}

void	Span::addNumber(unsigned int i)
{
	if (vec.size() == _N)
		throw (Span::LimitReached());
	vec.push_back(i);
}

//EXCEPTIONS
const char*	Span::LimitReached::what() const throw()
{
	return (BRED "Storing limit reached." CRESET);
}

const char* Span::SpanUnfound::what() const throw() 
{
	return (BRED "Cannot calculate span." CRESET);
}

//FUNCTIONS
unsigned int		Span::shortestSpan()
{
	unsigned int	y = 0;
	std::vector<unsigned int>::iterator it;

	if (vec.size() == 1 || vec.size() == 0)
		throw (Span::SpanUnfound());
	std::sort(vec.begin(), vec.end());
	y = vec[1] - vec[0];
	for (it = vec.end() - 1; it != vec.begin(); it--)
	{
		if ((*it - *(it - 1)) < y)
			y = *it - *(it - 1);
	}
	return (y);
}

unsigned int		Span::longestSpan()
{
	unsigned int ret;
	std::vector<unsigned int>::iterator it;

	if (vec.size() == 1 || vec.size() == 0)
		throw (Span::SpanUnfound());
	std::sort(vec.begin(), vec.end());
	it = vec.end() - 1;
	ret = *it - vec[0];
	return (ret);
}

void	Span::randomFill(unsigned int N)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < N; i ++)
		this->addNumber(rand());
}
