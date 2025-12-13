#include "AAnimal.hpp"

// Default 
AAnimal::AAnimal(void)
{
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "undefined 👾";
    return ;
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}
AAnimal::AAnimal(std::string const type) 
{
    this->setType(type);
    std::cout << "Animal constructor called" << std::endl;
    return;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
    std::cout << "Animal destructor called ⚰️" << std::endl;
    return ;
}

/*************Getters n Setters *************/
std::string AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::setType(std::string const typeIn)
{
    this->type = typeIn;
}