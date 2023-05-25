#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const& old_obj);
        ~Cat();
        Cat& operator=(Cat const& obj);

        void makeSound() const;
    private:
        Brain *brain;
};

#endif