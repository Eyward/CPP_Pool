/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 02:47:50 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/05 01:34:35 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		void announce();
		Zombie* zombieHorde(int N, std::string name);

};

#endif