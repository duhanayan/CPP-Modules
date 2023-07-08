#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base::~Base()
{
	std::cout << "Base Destructor Called" << std::endl;
}

Base *generate(void)
{
	srand(time(NULL));
	int number = rand() % 3;
	switch (number)
	{
	case 0:
	std::cout << "[A created]" << std::endl;
		return new A();
	case 1:
	std::cout << "[B created]" << std::endl;
		return new B();
	case 2:
	std::cout << "[C created]" << std::endl;
		return new C();
	default:
		return nullptr;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != nullptr)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void identify (Base &p){
	try{
		Base ptr = dynamic_cast<A&>(p);
		(void)ptr;
		std::cout << "Variable Type Is -> [A]" << std::endl;
	}catch (std::bad_cast){}
	try {
		Base ptr = dynamic_cast<B&>(p);
		(void)ptr;
		std::cout << "Variable Type Is -> [B]" << std::endl;
	}catch (std::bad_cast){}
	try{
		Base ptr = dynamic_cast<C&>(p);
		(void)ptr;
		std::cout << "Variable Type Is -> [C]" << std::endl;
	}catch (std::bad_cast){}
}
