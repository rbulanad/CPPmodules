#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include "Data.h"
# include <stdint.h>

class	Serializer
{
	private:
	public:
	Serializer();
	~Serializer();
	Serializer(const Serializer &dup);
	Serializer &operator=(const Serializer &dup);

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif
