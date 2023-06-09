/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 02:17:06 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/05 01:27:48 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
		return (0);
	Zombie root("Zombie root");
	
	Zombie *child;
	
	child = root.newZombie("Zombie child1");
	root.announce();
	child->announce();
	root.randomChump("Zombie child2");
	delete child;

	return (0);
}