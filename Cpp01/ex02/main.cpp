/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:02:43 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/03 02:11:19 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "The memory address of the string variable   :" << &str << std::endl;
    std::cout << "The memory address held by stringPTR        :" << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF        :" << &stringREF << std::endl;
    
    std::cout << "The value of the string variable            :" << str << std::endl;
    std::cout << "The value pointed to by stringPTR           :" << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF           :" << stringREF << std::endl;
    return (0);
}