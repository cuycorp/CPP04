#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain& other);
        Brain &operator=(const Brain &other);
        ~Brain();
        //setters
        void setIdea(int i, std::string idea);
        //getters
        std::string getIdea(int i) const;
};

#endif

