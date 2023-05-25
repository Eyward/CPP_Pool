#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const& old_obj);
        ~WrongCat();

        WrongCat& operator=(WrongCat const& obj);

        void makeSound() const;
};


#endif