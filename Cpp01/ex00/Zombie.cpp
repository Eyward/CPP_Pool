/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 02:18:35 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/05 01:22:31 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << " destructor : this Zombie is dead" << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}