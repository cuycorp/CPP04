#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(const Animal& other);
        Animal(std::string const type);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        //methods
        std::string getType() const;
        void setType(std::string const typeIn);
        virtual void makeSound(void) const;
};

#endif

