#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:
	public:
	MutantStack() {}
	~MutantStack() {}
	MutantStack(const MutantStack &dup);
	MutantStack &operator=(const MutantStack &dup);
	
	typedef typename std::deque<T>::iterator iterator;

	iterator begin()
	{
		iterator caca = this->c.begin();
		return (caca);
	}
	
	iterator end()
	{
		iterator caca = this->c.end();
		return (caca);
	}
};


#endif
