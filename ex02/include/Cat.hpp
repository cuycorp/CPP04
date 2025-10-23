#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>
class Cat : public AAnimal
{
  private:
	Brain *catBrain;

  public:
	Cat(void);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();
	void makeSound(void) const;
};

#endif
