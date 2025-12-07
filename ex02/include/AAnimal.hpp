#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        // Orthodox Canonical Form     
        AAnimal(void);
        AAnimal(const AAnimal& other);
        AAnimal &operator=(const AAnimal &other);
        virtual ~AAnimal();
        // Other methods
        std::string getType() const;
        virtual void makeSound(void) const = 0;
};

#endif

