/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:55:32 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/03 04:14:54 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    //_name = name;
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
    std::cout << _name << " attack with his " << _weapon->getType() << std::endl;
}
