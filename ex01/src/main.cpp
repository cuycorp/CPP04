#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << "-----------------------------------" << std::endl;
	{
		const Animal* animals[4];
		//Constructing 
		for(int i = 0; i < 4; i++)
		{
			if (i < 2)
				animals[i]= new Cat(); 
			else
				animals[i]= new Dog(); 
		}
		std::cout << "-----------------------------------" << std::endl;

		//Deleting
		for(int i = 0; i < 4; i++)
		{
			if (i < 2)
				delete animals[i]; 
			else
				delete animals[i]; 
		}
	}
	std::cout << "--------- Testing deep n shallow copies ---------" << std::endl;
	{
		Dog original;
		original.dogBrain->setIdea(0, "bark");
		original.dogBrain->setIdea(0, "eat");
		Dog copy = original;

		std::cout << "Original idea 0: " << original.dogBrain->getIdea(0) <<  std::endl;
		std::cout << "Copy idea 0: " << copy.dogBrain->getIdea(0) <<  std::endl;
		
		original.dogBrain->setIdea(0, "sleep");

		
	}
	return (0);
}

/*
shallow and deep copy

*/
