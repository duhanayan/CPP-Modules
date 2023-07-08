#include "Data.h"

Data::Data(int _value) : value(_value)
{
	std::cout << "Data Constructor Called" << std::endl;
}

Data::Data(const Data &var)
{
	*this = var;
	std::cout << "Data Copy Constructor Called" << std::endl;
}

Data &Data::operator=(const Data &var)
{
	if (this != &var)
		*this = var;
	std::cout << "Data Copy Assigment Overload Called" << std::endl;
	return *this;
}

Data::~Data()
{
	std::cout << "Data Destructor Called" << std::endl;
}

int Data::getValue()
{
	return value;
}

Serializer::Serializer()
{
	std::cout << "Serializer Constructor Called" << std::endl;
}

Serializer::Serializer(const Serializer &var)
{
	*this = var;
	std::cout << "Serializer Copy Constructor Called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &var)
{
	if (this != &var)
		*this = var;
	std::cout << "Data Copy Assigment Overload Called" << std::endl;
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
