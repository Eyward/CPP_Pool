#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const& old_obj);
        ~Dog();
        Dog& operator=(Dog const& obj);

        void makeSound() const;
};

#endif