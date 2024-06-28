#include "Serializer.hpp"

int	main()
{
	Data test;

	uintptr_t savedUint = Serializer::serialize(&test);

	test.i = 5;
	test.bob = "bob";
	std::cout << "before seri: " << &test << std::endl;
	std::cout << "serialized: " << savedUint << std::endl;
	std::cout << "deserialized: " << Serializer::deserialize(savedUint) << std::endl;

	std::cout << "One shot: " << Serializer::deserialize(Serializer::serialize(&test)) << std::endl;

	return (0);
}
