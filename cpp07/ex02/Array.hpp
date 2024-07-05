#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define CRESET	"\e[0m"

template <typename T>
class	Array
{
	private:
	T*				_array;
	unsigned int	_size;

	public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(const Array &dup);
	Array &operator=(const Array &dup);

	T& operator[](unsigned int i) const;
	unsigned int size() const;
};

template <typename T>
Array<T>::Array()
{
	std::cout << BGRN "Default Construct" CRESET << std::endl;
	_array = new T[0];
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << BGRN "Construct" CRESET << std::endl;
	_array = new T[n];
	for(unsigned int i = 0; i < n; i++)
		_array[i] = 0;
	_size = n;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << BYEL "Destruct" CRESET << std::endl;
	delete[] _array;
}

template <typename T>
Array<T>::Array(const Array &dup)
{
	*this = dup;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &dup)
{
	std::cout << BGRN "Copy Construct" CRESET << std::endl;
	if (this != &dup)
	{
		delete[] _array;
		_size = dup._size;
		this->_array = new T[_size];
		for(unsigned int i = 0; i < _size; i++)
			this->_array[i] = dup._array[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw (std::out_of_range("Out of range"));
	return _array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}
#endif
