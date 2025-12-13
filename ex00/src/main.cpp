#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*
main takeover: redifining functions in the derived function
i.e. modifying correctly makesound()
*/
int	main(void)
{
	std::cout << std::endl;
	std::cout << "-------------------- Pointers --------------------" << std::endl;
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << "-------------------- After initialization --------------------" << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << "-------------------- Making sound --------------------" << std::endl;
		j->makeSound(); // will output the cat sound!
		i->makeSound();
		meta->makeSound();
		std::cout << "-------------------- Deleting objects --------------------" << std::endl;
		delete meta;
		delete j;
		delete i;
		std::cout << "-----------------------------------------------" << std::endl;
		std::cout << "Wrong classes test" << std::endl;
		std::cout << "-----------------------------------------------" << std::endl;
		const WrongAnimal *a = new WrongAnimal();
		const WrongAnimal *b = new WrongCat();
		a->makeSound();
		b->makeSound();
		delete a;
		delete b;
	}
	std::cout << std::endl;
	std::cout << "-------------------- Direct instance --------------------" << std::endl;
	{
		Animal animalejo;
		Cat gato;
		Dog perro;
		std::cout << "-------------------- Making sound --------------------" << std::endl;
		animalejo.makeSound();
		gato.makeSound();
		perro.makeSound();
	}
	return (0);
}
