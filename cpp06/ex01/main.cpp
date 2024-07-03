#include "Serializer.hpp"

int	main()
{
	Data test;

	test.i = 5;
	test.bob = "bob";
	uintptr_t saved = Serializer::serialize(&test);
	Data *test2 = Serializer::deserialize(saved);

	std::cout << "before serialize: " << &test << std::endl;
	std::cout << "after serialize: " << saved << std::endl;
	std::cout << "deserialized: " << Serializer::deserialize(saved) << std::endl;
	std::cout << "oneshot: " << Serializer::deserialize(Serializer::serialize(&test)) << std::endl;
	
	std::cout << "" << std::endl;
	std::cout << "Prints of resulting data struct from deserialize function" << std::endl;
	std::cout << "Data->i = " << test2->i << std::endl;
	std::cout << "Data->bob = " << test2->bob << std::endl;

	return (0);
}
