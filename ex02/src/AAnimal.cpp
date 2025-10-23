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

/*************Getters*************/
std::string AAnimal::getType() const
{
    return (this->type);
}

