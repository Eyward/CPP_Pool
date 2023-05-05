/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:55:36 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/05 17:57:16 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon*     _weapon;      
    public:
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon& PTRweapon);
        void    attack() const ;
};

#endif