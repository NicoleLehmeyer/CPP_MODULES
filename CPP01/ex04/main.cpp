/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:19:19 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:19:20 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "ERROR:   Incorrect number of arguments." << std::endl;
        return (1);
    }

    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty())
    {
        std::cerr << "ERROR:   s1 must not be empty." << std::endl;
        return (1);
    }

    std::ifstream file (argv[1]);
    if (!file.good() || !file.is_open())
    {
        std::cerr << "ERROR:   Input file is not good or failed on opening." << std::endl;
        return (1);
    }

    std::ofstream replaceFile((std::string(argv[1]).append(".replace")).c_str());
    if (!replaceFile.is_open())
    {
        std::cerr << "ERROR:   Output file failed on opening." << std::endl;
        file.close();
        return (1);
    }

    size_t position = 0;
    std::string line;

    while (getline(file, line))
    {
        position = line.find(s1, 0);
        while (position != line.npos)
        {
            line.erase(position, s1.length());
            line.insert(position, s2);
            position = line.find(s1, position + s2.length());
        }
        replaceFile << line << std::endl;
    }
    
    file.close();
    replaceFile.close();

    return (0);
}