#include "Animal.hpp"

// Default 
Animal::Animal(void)
{
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "undefined 👾";
    return ;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal::Animal(std::string const type) 
{
    this->setType(type);
    std::cout << "Animal constructor called" << std::endl;
    return;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called ⚰️" << std::endl;
    return ;
}
/*************Methods*************/
 void Animal::makeSound(void)const
 {
    std::cout << "Indistinct sound 👾" << std::endl;
 }

/*************Getters n Setters*************/
std::string Animal::getType() const
{
    return (this->type);
}

void Animal::setType(std::string const typeIn)
{
    this->type = typeIn;
}