#include <iostream>
#include "Data.h"

int main()
{ /*
	 Data *data = new Data(42);
	 std::cout << "Original value: " << data->getValue() << std::endl;

	 uintptr_t serialized = Serializer::serialize(data);
	 Data *deserialized = Serializer::deserialize(serialized);

	 std::cout << "Deserialized value: " << deserialized->getValue() << std::endl;

	 delete data; // Freeing the dynamically allocated memory

 */
	Data data(42);

	uintptr_t ptr = Serializer::serialize(&data);

	Data *object = Serializer::deserialize(ptr);

	std::cout << &data << "  //Original data" << std::endl;
	std::cout << ptr << "   //Serialized data" << std::endl;
	std::cout << object << "  //Deserialized data" << std::endl;
	std::cout << ((&data == object) ? "equal!\n" : "not equal!\n");
	delete object;
	return 0;
}
