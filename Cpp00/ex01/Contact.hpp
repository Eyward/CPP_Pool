/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 05:55:57 by zzirh             #+#    #+#             */
/*   Updated: 2023/04/11 22:12:52 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

void	contact_print(std::string str);

class Contact
{
	private:
		std::string	_fist_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone_nbr;
		std::string _dark_secret;
		int			_index;
	
	public:
		void	set_first_name(std::string str);
		void	set_last_name(std::string str);
		void	set_nick_name(std::string str);
		void	set_phone_nbr(std::string str);
		void	set_dark_secret(std::string str);
		void	set_index(int	in);
		
		std::string	get_first_name() const;
		std::string get_last_name() const;
		std::string get_nick_name() const;
		std::string get_phone_nbr() const;
		std::string	get_dark_secret() const;
		int			get_index() const;
};


#endif