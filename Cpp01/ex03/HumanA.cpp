/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:55:25 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/05 02:16:49 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name)
{
    std::cout << "HumanA constructor" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destructor : "<< _name << std::endl;
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
