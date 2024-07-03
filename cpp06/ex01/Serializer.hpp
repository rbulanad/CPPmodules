#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <stdint.h>
# include "Data.h"

class	Serializer
{
	private:
	Serializer();
	public:
	~Serializer();
	Serializer(const Serializer &dup);
	Serializer &operator=(const Serializer &dup);

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif
