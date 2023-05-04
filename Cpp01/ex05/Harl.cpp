/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 03:17:46 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/04 04:31:15 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Constructor : create Harl\n" << std::endl;
}

Harl::~Harl()
{
    std::cout << "\nDestructor : destroy Harl" << std::endl;
}

void    Harl::debug( void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger\n";
    std::cout << " I really do!" << std::endl;
}

void    Harl::info( void)
{
    std::cout << "I cannot believe adding extra bacon costs more money" << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; 

}   

void    Harl::warning( void)
{
    std::cout << "I think I deserve to have some extra bacon for free" << std::endl;
    std::cout << " I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void    Harl::complain( std::string level)
{
    int i;
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*f[4])(void) = {&Harl::debug,
                    &Harl::info, 
                    &Harl::warning, 
                    &Harl::error};

    i = 0;
    while (i < 4)
    {
        if (str[i] == level)
            (this->*f[i])();
        i++;
    }
}


