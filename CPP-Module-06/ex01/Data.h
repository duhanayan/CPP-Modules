#pragma once

#include <iostream>

class Data
{
	int value;

public:
	Data(int _value);
	Data(const Data &var);
	Data &operator=(const Data &var);
	~Data();
	int getValue();
};

class Serializer
{
	Serializer();
	Serializer(const Serializer &var);
	Serializer &operator=(const Serializer &var);
	~Serializer();

public:
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};
