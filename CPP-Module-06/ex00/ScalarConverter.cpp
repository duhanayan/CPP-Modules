#include "ScalarConverter.h"

ScalarConverter::ScalarConverter(std::string &_input) : input(_input)
{
	this->type = define(input);
}

ScalarConverter::ScalarConverter(const ScalarConverter& var)
{
	*this = var; 
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& var)
{
	if(this != &var)
		*this = var;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert()
{
	this->toChar();
	this->toInt();
	this->toFloat();
	this->toDouble();
}

int ScalarConverter::define(std::string &input)
{
	int type;
	int i;
	bool dot;

	i = 1;
	dot = false;
	type = STRING;
	if (input.length() == 1 && !!isascii(input[0]) == 1 && !!isdigit(input[0]) != 1)
	{
		return CHAR;
	}
	if (input[0] == '-' || !!isdigit(input[0]) == 1)
	{
		type = INT;
		while (!!isdigit(input[i]) || input[i] == '.')
		{
			if (input[i] == '.')
			{
				if (dot == true && input[i] == '.')
					return STRING;
				type = DOUBLE;
				dot = true;
			}
			i++;
		}
		if ((input[i] == 'f' || input[i] == 'F') && type == DOUBLE)
			if (input[i - 1] == '.')
				type = STRING;
			else
				type = FLOAT;
		else if (input[i] != '\0' || input[i - 1] == '.' || (type == FLOAT && input[i + 1] != '\0'))
			type = STRING;
	}
	return type;
}

void ScalarConverter::toChar()
{
	int value;

	std::cout << "Char:\t";
	value = atoi(this->input.c_str());
	if (this->type == STRING)
		std::cout << "impossible" << std::endl;
	else if (this->type == CHAR)
		std::cout << static_cast<char>(this->input[0]) << std::endl;
	else // INT or FLOAT or DOUBLE
	{
		if (value >= 32 && value <= 126)
			std::cout << "\'" << static_cast<char>(value) << "\'" << std::endl;
		else
			std::cout << "non printable" << std::endl;
	}
}

void ScalarConverter::toInt()
{
	int value;
	double value_d;

	std::cout << "Int:\t";
	value = atoi(this->input.c_str());
	value_d = atof(this->input.c_str());
	if (this->type == STRING)
		std::cout << "impossible" << std::endl;
	else if (this->type == CHAR)
		std::cout << static_cast<int>(input[0]) << std::endl;
	else // INT or FLOAT or DOUBLE
	{
		if (value_d < std::numeric_limits<int>::min() || value_d > std::numeric_limits<int>::max())
			std::cout << "overlimit" << std::endl;
		else
			std::cout << static_cast<int>(value) << std::endl;
	}
}

int ScalarConverter::floatInff()
{
	std::string str;
	float x;
	char *e;

	str = this->input;
	if (this->type == FLOAT)
		str.pop_back();
	x = (float)strtod(str.c_str(), &e);
	if (*e != '\0')
		return 2;
	if (x < std::numeric_limits<float>::lowest())
		return -1;
	if (x > std::numeric_limits<float>::max())
		return 1;
	return 0;
}

int ScalarConverter::doubleInff()
{
	std::string str;
	double x;
	char *e;

	str = this->input;
	if (this->type == FLOAT)
		str.pop_back();
	x = strtod(str.c_str(), &e);
	if (*e != '\0')
		return 2;
	if (x < std::numeric_limits<double>::lowest())
		return -1;
	if (x > std::numeric_limits<double>::max())
		return 1;
	return 0;
}

void ScalarConverter::toFloat()
{
	float value;

	std::cout << "Float:\t";
	value = atof(this->input.c_str());
	if (this->type == STRING)
		std::cout << "nanf" << std::endl;
	else if (this->type == CHAR)
		std::cout << static_cast<float>(this->input[0]) << ".0f" << std::endl;
	else // INT or FLOAT or DOUBLE
	{
		int ret = floatInff();
		if (ret != 0)
		{
			if (ret == 1)
				std::cout << "+inff" << std::endl;
			else if (ret == -1)
				std::cout << "-inff" << std::endl;
			else
				std::cout << "impossible" << std::endl;
		}
		else
		{
			if (value == floor(value))
				std::cout << static_cast<float>(value) << ".0f" << std::endl;
			else
				std::cout << static_cast<float>(value) << "f" << std::endl;
		}
	}
}

void ScalarConverter::toDouble()
{
	double value;

	std::cout << "Double:\t";
	value = atof(this->input.c_str());
	if (this->type == STRING)
		std::cout << "nan" << std::endl;
	else if (this->type == CHAR)
		std::cout << static_cast<double>(this->input[0]) << ".0" << std::endl;
	else // INT or FLOAT or DOUBLE
	{
		int ret = doubleInff();
		if (ret != 0)
		{
			if (ret == 1)
				std::cout << "+inff" << std::endl;
			else if (ret == -1)
				std::cout << "-inff" << std::endl;
			else
				std::cout << "impossible" << std::endl;
		}
		else
		{
			if (value == floor(value))
				std::cout << static_cast<double>(value) << ".0" << std::endl;
			else
				std::cout << static_cast<double>(value) << std::endl;
		}
	}
}
