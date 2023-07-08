#pragma once

#include <iostream>
#include <string.h>
#include <math.h>

#define STRING 0
#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4

class ScalarConverter
{
	std::string input;
	int type;

	int floatInff();
	int doubleInff();

	void toChar();
	void toInt();
	void toFloat();
	void toDouble();

	int define(std::string &input);

public:
	ScalarConverter(std::string &_input);
	ScalarConverter(const ScalarConverter& var);
	ScalarConverter& operator=(const ScalarConverter& var);
	~ScalarConverter();
	void convert();
};
