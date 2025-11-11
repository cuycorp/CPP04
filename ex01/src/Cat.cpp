#include "Brain.hpp"
#include "Cat.hpp"

// Default construtor
Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->catBrain = new Brain();
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
	std::cout << "Cat destructor called ⚰️" << std::endl;
	delete this->catBrain;
	return ;
}
void Cat::makeSound(void) const
{
	std::cout << "Miauu 🐱" << std::endl;
}

