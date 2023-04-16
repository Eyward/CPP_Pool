/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 05:38:34 by zzirh             #+#    #+#             */
/*   Updated: 2023/04/15 18:53:35 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

void	menu()
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "      Available command : ADD | SEARCH | EXIT\n\n\n" << std::endl;
	std::cout << "      ADD : save a new contact\n" << std::endl;
	std::cout << "      SEARCH : display a specific contact\n" << std::endl;
	std::cout << "      EXIT : quit the program\n" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	
}


int	main(int ac, char **av)
{
	PhoneBook	PhoneBook;
	std::string	str;

	(void)av;
	if (ac != 1)
		return (0);
	menu();
	while (std::cin.good())
	{
		std::cout << "=>> ";
		if (!(std::getline(std::cin, str)))
			return (0);
		else if (str == "ADD")
			PhoneBook.add_contact();
		else if (str == "SEARCH")
			PhoneBook.search_contact();
		else if (str == "EXIT")
			return (0);
		else
			std::cout << "invalid input" << std::endl;
	}	
	return (0);
}