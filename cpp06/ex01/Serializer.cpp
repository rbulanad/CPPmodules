#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(const Serializer &dup)
{
	*this = dup;
}

Serializer &Serializer::operator=(const Serializer &dup)
{
	if (this != &dup) {}
	return *this;
}

uintptr_t	Serializer::serialize(Data* ptr)
{

}
