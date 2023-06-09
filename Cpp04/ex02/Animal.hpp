#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    public:

        Animal();
        Animal(std::string type);
        Animal(Animal const& old_obj);
        virtual ~Animal();
        Animal& operator=(Animal const& obj);

        virtual void makeSound(void) const = 0;
        std::string getType() const;
    protected:
        std::string _type;

};


#endif