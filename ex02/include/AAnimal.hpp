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
        AAnimal(std::string const type);
        AAnimal &operator=(const AAnimal &other);
        virtual ~AAnimal();
        // Other methods
        std::string getType() const;
        void setType(std::string const typeIn);
        virtual void makeSound(void) const = 0;
};

#endif

