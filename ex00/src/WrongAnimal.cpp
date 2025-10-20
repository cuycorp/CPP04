#include "WrongAnimal.hpp"


// Default 
WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "undefined 👾";
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
    return ;
}
/*************Getters*************/
 void WrongAnimal::makeSound(void) const
 {
    std::cout << "Indistinct sound 👾" << std::endl;
 }

/*************Getters*************/
std::string WrongAnimal::getType() const
{
    return (this->type);
}

