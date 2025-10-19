#include "Cat.hpp"

// Default constructor
Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

// Copy constructor
Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

// Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Destructor
Cat::~Cat(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
void Cat::makeSound(void)
{
	std::cout << "Miauu 🐶" << std::endl;
}
