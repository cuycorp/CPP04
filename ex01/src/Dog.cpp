#include "Dog.hpp"
#include "Brain.hpp"

// Default constructor
Dog::Dog(void)
{
    std::cout << "🐶 default constructor called" << std::endl;
    this->dogBrain = new Brain();
    this->type = "Dog";
    return ;
}

// Copy constructor
Dog::Dog(const Dog &other) : Animal(other.type)
{
    std::cout << "🐶 copy constructor called" << std::endl;
    *this = other;
}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "🐶 Assignment operator called" << std::endl;
    if (&other != this)
    {    
        this->type = other.type;
        this->dogBrain = new Brain(*other.dogBrain);
    }
    return (*this);
}

// Destructor
Dog::~Dog(void)
{
    std::cout << "Dog destructor called 🐶⚰️" << std::endl;
    delete  this->dogBrain;
    return ;
}

void Dog::makeSound(void) const
{
    std::cout << "Guauu 🐶" << std::endl;
}

void Dog::setIdeaDog(int i, std::string idea)
{
	this->dogBrain->setIdea(i, idea);
}

std::string Dog::getIdeaDog(int i) const
{
    return (this->dogBrain->getIdea(i));
}
