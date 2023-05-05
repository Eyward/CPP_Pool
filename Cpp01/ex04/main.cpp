/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 04:21:45 by zzirh             #+#    #+#             */
/*   Updated: 2023/05/05 02:58:45 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


std::string ft_replace_line(std::string line, std::string sorigin, std::string snew)
{
    int id;
    
    id = 0;
    while (line[id])
    {
        if (line[id] == sorigin[0])
        {
            if (line.substr(id, sorigin.size()) == sorigin)
            {
                line.erase(id, sorigin.size());
                line.insert(id, snew);
                id += snew.size() - 1;
            }
        }
        id++;
    }
    return (line);
}

int main(int ac, char **av)
{
    std::ifstream forigin;
    std::ofstream fnew;
    std::string line;
    
    if (ac != 4 || !av[1] || !av[2] || !av[3])
        return (1);
    forigin.open(av[1], std::ios::in);
    if (!forigin)
    {
        std::cout << "Failed to open file" << std::endl;
        return (1);
    }
    
    if (forigin.peek() == std::ifstream::traits_type::eof())
    {
        std::cout << "file is empty " << std::endl;
        return (1);
    }
    
    fnew.open(av[1] + std::string(".replace"), std::ios::out);
    if (!fnew)
    {
        std::cout << ".replace can't be created" << std::endl;
        return (1); 
    }
    while (!forigin.eof())
    {
        if (std::getline(forigin, line))
            fnew << ft_replace_line(line, av[2], av[3]) << std::endl;
    }
    std::cout << av[1] << " has been replaced " << std::endl;
    forigin.close();
    fnew.close();
    return (0); 
}