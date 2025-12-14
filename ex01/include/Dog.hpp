#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
	private:
	Brain *dogBrain;
	public:
	Dog(void);
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();
	virtual void makeSound(void) const;
	void setIdeaDog(int i, std::string idea);
	std::string getIdeaDog(int i) const;
};

#endif
