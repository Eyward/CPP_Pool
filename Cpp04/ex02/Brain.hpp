#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Brain
{
    public:
        
        Brain();
        Brain(Brain const& old_obj);
        ~Brain();
        Brain& operator=(Brain const& obj);
    private:
            std::string ideas[100];
};

#endif