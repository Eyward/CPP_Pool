/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:28:29 by zzirh             #+#    #+#             */
/*   Updated: 2023/04/15 23:47:54 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	j = 0;
	c = 0;
	
	if (!ac || !av)
		return (0);
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
		{
			while (av[i][j])
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					c = (char)toupper(av[i][j]);
					std::cout << c;	
				}
				else
					std::cout << av[i][j];
				j++;
			}
			j = 0;
			i++;
		}
		std::cout << std::endl;
	}	
	
	return (0);
}
