/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 03:17:52 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/04 03:42:38 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac < 2 || !av[1][0])
    {
        std::cout << "No Arguments" << std::endl;
        return (1);
    }
    
    if (ac > 2 )
    {
        std::cout << "Too Many Arguments " << std::endl;
        return (1);   
    } 
    Harl harl;
    harl.complain(av[1]);
    return (0);
}