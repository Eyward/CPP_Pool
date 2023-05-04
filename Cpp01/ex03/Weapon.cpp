/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:55:46 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/03 03:18:15 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    _type = name;
}

Weapon::~Weapon()
{}

void    Weapon::setType(std::string type)
{
    _type = type;
}

std::string Weapon::getType() const
{
    return (_type);
}