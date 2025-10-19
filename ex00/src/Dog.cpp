#include "Dog.hpp"

// Default constructor
Dog::Dog(void)
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    return ;
}

// Copy constructor
Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;

}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Assignment operator called" << std::endl;
    if (&other != this)
        this->type = other.type;
    return (*this);
}

// Destructor
Dog::~Dog(void)
{
    std::cout << "Dog estructor called" << std::endl;
    return ;
}

void Dog::makeSound(void)
{
    std::cout << "Guauu 🐶" << std::endl;
}
