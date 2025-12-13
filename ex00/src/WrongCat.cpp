#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other.type)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
}

// Assignment operator overload
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Destructor
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}
void WrongCat::makeSound(void) const 
{
	std::cout << "Miauu 🐱" << std::endl;
}
