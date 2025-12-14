#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
	private: 
	Brain *catBrain;
	public:
	Cat(void);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();
	virtual void makeSound(void) const;
	void setIdeaCat(int i, std::string idea);
	std::string getIdeaCat(int i) const;
};

#endif
