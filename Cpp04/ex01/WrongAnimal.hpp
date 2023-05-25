#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const& old_obj);
        ~WrongAnimal();
        WrongAnimal& operator=(WrongAnimal const& obj);

        void makeSound() const;
        std::string getType() const;

    protected:
        std::string _type; 
};



#endif