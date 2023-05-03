/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:50:51 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/02 22:15:07 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	*horde;
	
	i = 0;
	horde = new Zombie[N];
	if (!horde)
		return (NULL);
	while(i < N)
	{
		horde[i]._name = name;
		i++;
	}
	return (horde);
}