/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 02:46:00 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/05 01:53:13 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
		return (0);

	int		i;
	int		N;
	Zombie	zomb;
	Zombie	*horde;
	
	N = 10;
	i = 0;
	
	horde = zomb.zombieHorde(N, "hooorde");
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return (0);
}