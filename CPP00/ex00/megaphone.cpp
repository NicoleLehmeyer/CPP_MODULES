/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 22:56:38 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/02/04 22:56:39 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int argc, char **argv)
{
    int i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (i < argc)
        {
            for (int j = 0 ; argv[i][j] != '\0' ; ++j)
                argv[i][j] = toupper(argv[i][j]);
            std::cout << argv[i];
            i++;
        }
    }
    std::cout << std::endl;
    return 0;
}
