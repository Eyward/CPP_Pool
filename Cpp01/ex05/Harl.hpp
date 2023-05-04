/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 03:17:50 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/04 03:24:46 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
    private:
        void debug( void);
        void info( void);
        void warning( void);
        void error( void);
    public:
        Harl();
        ~Harl();
        void complain( std::string level);
};


#endif