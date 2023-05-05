/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:55:32 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/05 17:57:47 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) , _weapon(NULL)
{
    std::cout << "HumanB constructor" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destructor : " << _name << std::endl; 
}

void    HumanB::setWeapon(Weapon& PTRweapon)
{
    _weapon = &PTRweapon;
}

void    HumanB::attack() const
{
    if (_weapon)
        std::cout << _name << " attack with his " << _weapon->getType() << std::endl;
}
