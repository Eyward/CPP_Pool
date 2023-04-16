/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 06:15:12 by zzirh             #+#    #+#             */
/*   Updated: 2023/04/15 21:00:22 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	contact_print(std::string str)
{
	int	id;

	id = 0;
	if (str.length() > 10)
	{
		str[9] = '.';
		while (id < 10 && str[id])
		{
			std::cout << str[id];
			id++;
		}
	}
	else
		std::cout << std::setw(10) << str;
}

// Getters :

std::string	Contact::get_first_name() const
{
	return _fist_name;
}

std::string	Contact::get_last_name() const
{
	return _last_name;
}

std::string	Contact::get_nick_name() const
{
	return _nick_name;
}

std::string Contact::get_phone_nbr() const
{
	return _phone_nbr;
}

std::string Contact::get_dark_secret() const
{
	return _dark_secret;
}

int			Contact::get_index() const
{
	return _index;
}


// Setters :

void	Contact::set_first_name(std::string str)
{
	_fist_name = str;
}

void	Contact::set_last_name(std::string str)
{
	_last_name = str;
}

void	Contact::set_nick_name(std::string str)
{
	_nick_name = str;
}

void	Contact::set_phone_nbr(std::string str)
{
	_phone_nbr = str;
}

void	Contact::set_dark_secret(std::string str)
{
	_dark_secret = str;
}

void	Contact::set_index(int	in)
{
	_index = in;
}
