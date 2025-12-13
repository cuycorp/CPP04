#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal(std::string const type);
        WrongAnimal &operator=(const WrongAnimal &other);
        virtual ~WrongAnimal();
        std::string getType() const;
        void setType(std::string const typeIn);
        void makeSound(void) const;
};

#endif


