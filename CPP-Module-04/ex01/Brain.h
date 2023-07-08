#pragma once

#include <iostream>

class Brain
{
	protected:
		std::string *ideas;
	public:
		Brain();
		Brain(const Brain &var);
		~Brain();
		Brain &operator = (const Brain &var);
		std::string *getIdeas() const;
};