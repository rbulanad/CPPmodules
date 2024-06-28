#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

class	Serializer
{
	private:
	public:
	Serializer();
	~Serializer();
	Serializer(const Serializer &dup);
	Serializer &operator=(const Serializer &dup);

	uintptr_t	serialize(Data* ptr);
	//Data*		deserialize(uintptr_t raw);
};

#endif
