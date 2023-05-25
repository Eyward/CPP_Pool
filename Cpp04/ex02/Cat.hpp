#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const& old_obj);
        virtual ~Cat();
        Cat& operator=(Cat const& obj);

        virtual void makeSound() const;
    private:
        Brain *brain;
};

#endif