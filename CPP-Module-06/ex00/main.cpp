#include "ScalarConverter.h"
#include <iostream>

int main(int argc, char **argv)
{
	std::string str;

	if (argc == 2)
	{
		str = argv[1];
		ScalarConverter *test = new ScalarConverter(str);
		test->convert();
		free(test);
	}
	else
		std::cout << "Wrong input " << argc << std::endl;
	return (0);
}
