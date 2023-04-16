/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 06:10:48 by zzirh             #+#    #+#             */
/*   Updated: 2023/04/16 01:17:53 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	_nbr_of_contact = 0;
}

int	check_nbr(std::string str)
{
	int	i = 0;

	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return(0);
		i++;
	}
	return (1);
}

int	ft_stringtoint(std::string str)
{
	int	i;
	int	result;
	
	i = 0;
	result = 0;
	while (str[i])
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result);
}

std::string input_field(std::string str)
{
	std::string	s;
	std::string padding;
	
	for (unsigned int i = 0; i < (20 - str.length()); i++)
		padding += " ";
	std::cout << str << padding << "-> ";
	if (!std::getline(std::cin, s))
		return ("");
	while (s.length() == 0)
	{
		std::cout << str << padding << "-> ";
		std::cout << "empty input" << std::endl;
		std::cout << "Try again       -> ";
		s = "";
		if (!std::getline(std::cin, s))
			return ("");
	}
	std::cout << str << padding << " : " << s << std::endl;
	return (s);
}

int	PhoneBook::add_contact()
{
	int 		is_digit;
	std::string	s;
	
	is_digit = 0;
	if (PhoneBook::_nbr_of_contact == 8)
	{
		std::cout << "you are trying to add 9th contact" << std::endl << "this action will replace the oldest one by the new one"<< std::endl << "=>> ";
		if (!std::getline(std::cin, s))
			return (0);
		while (s.length() == 0 || s != "ADD")
		{
			std::cout << "Invalid input" << std::endl;
			std::cout << "Try again      -> ";
			s = "";
			if (!std::getline(std::cin, s))
				return (0);
		}
		
	}
	menu();
	std::cout << "\n*********** New Contact ************\n\n\n";
	s = input_field("First Name");
	if (s == "")
		return (1);
	_user[(PhoneBook::_nbr_of_contact)%8].set_first_name(s);
	s = input_field("Last Name");
	if (s == "")
		return (1);
	_user[(PhoneBook::_nbr_of_contact)%8].set_last_name(s);
	s = input_field("Nickname");
	if (s == "")
		return (1);
	_user[(PhoneBook::_nbr_of_contact)%8].set_nick_name(s);
	
	std::cout << "Phonenumber         -> ";
	if (!std::getline(std::cin, s))
		return (1);
	is_digit = 1;
	for (unsigned int i = 0; i < s.length(); i++)
	{
		if (s[i] < '0' || s[i] > '9')
			is_digit = 0;
	}
	while (s.length() != 5 || is_digit == 0)
	{
		std::cout << "Error : Phone number should be 5 digit long" << std::endl;
		std::cout << "Phonenumber         -> ";
		s = "";
		if (!std::getline(std::cin, s))
			return (1);
		is_digit = 1;
		for (unsigned int i = 0; i < s.length(); i++)
		{
			if (s[i] < '0' || s[i] > '9')
				is_digit = 0;
		}
	}
	
	std::cout << "Phonenumber             : " << s << std::endl;

	_user[(PhoneBook::_nbr_of_contact)%8].set_phone_nbr(s);

	s = input_field("Darkest Secret");
	if (s == "")
		return (1);

	_user[(PhoneBook::_nbr_of_contact)%8].set_dark_secret(s);
	_user[(PhoneBook::_nbr_of_contact)%8].set_index(((PhoneBook::_nbr_of_contact)%8));
	(PhoneBook::_nbr_of_contact)++;
	std::cout << std::endl << "Contact Added\n" << std::endl;
	return (1);
}

int	PhoneBook::search_contact()
{
	int			i;
	std::string	s;
	
	i = 0; 
	if (PhoneBook::_nbr_of_contact == 0)
	{
		std::cout << "Error :There's No contact"<< std::endl;
		return (1);
	}
	menu();
	std::cout << "\n-------------------------------------------\n";
	std::cout << "|                                            |\n";
	std::cout << "| Index   | First Name | Last Name | Nickname|\n";
	std::cout << "|                                            |\n";
	while (i < PhoneBook::_nbr_of_contact && (i < 8))
	{
		std::cout <<"\n|";
		std::cout << std::setw(10) << _user[i].get_index()+1;
		std::cout << "|";
		contact_print(_user[i].get_first_name());
		std::cout << "|";
		contact_print(_user[i].get_last_name());
		std::cout << "|";
		contact_print(_user[i].get_nick_name());
		std::cout << "|";
		i++;
	}
	std::cout << "\n-------------------------------------------\n";
	std::cout << "\n Search [Enter ID]:  ";
	if (!std::getline(std::cin, s))
		return (0);
	std::cout << std::endl;
	while (check_nbr(s) == 0 || ft_stringtoint(s) > PhoneBook::_nbr_of_contact || ft_stringtoint(s) < 1)
	{
		if (check_nbr(s) == 0)
			std::cout << "\nError :please enter a number\nSearch [Enter ID]:    ";
		else
			std::cout << "\nError :invalid Index \nSearch [Enter ID]:   ";
		if (!std::getline(std::cin, s))
			return (0);
	}
	menu();
	display_contact((int)(ft_stringtoint(s) - 1 ));
	return (0);

}

int	PhoneBook::display_contact(int	id)
{
	std::cout << "\nContact "<< id + 1 <<" :\n" <<std::endl;
	std::cout << "First Name      = " << _user[id].get_first_name() << std::endl;
	std::cout << "Last Name       = " << _user[id].get_last_name() << std::endl;
	std::cout << "Nickname        = " << _user[id].get_nick_name() << std::endl;
	std::cout << "Phonenumber     = " << _user[id].get_phone_nbr() << std::endl;
	std::cout << "Darkest Secret  = " << _user[id].get_dark_secret() << std::endl;
	return (0);
}