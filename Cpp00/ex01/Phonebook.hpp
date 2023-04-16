/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 05:47:46 by zzirh             #+#    #+#             */
/*   Updated: 2023/04/11 22:11:39 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

void	menu();
class PhoneBook
{
private:
	int		_nbr_of_contact;
	Contact	_user[8];
public:
	PhoneBook();
	int	add_contact();
	int	search_contact();
	int	display_contact(int	id);
};

#endif