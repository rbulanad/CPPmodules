#include "Serializer.hpp"

int	main()
{
	Data test;

	uintptr_t saved = Serializer::serialize(&test);

	std::cout << "before serialize: " << &test << std::endl;
	std::cout << "after serialize: " << saved << std::endl;
	std::cout << "deserialized: " << Serializer::deserialize(saved) << std::endl;
	std::cout << "oneshot: " << Serializer::deserialize(Serializer::serialize(&test)) << std::endl;
	return (0);
}
