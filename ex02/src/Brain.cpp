#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "🧠 Default constructor called" << std::endl;
    return ;
}


Brain::Brain(const Brain &other)
{
    std::cout << " 🧠 Copy constructor called" << std::endl;
    *this = other;

}


Brain &Brain::operator=(const Brain &other)
{
    std::cout << "🧠 Assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];    
    }
    return (*this);
}


Brain::~Brain(void)
{
    std::cout << "🧠 Destructor called ⚰️" << std::endl;
    return ;
}

