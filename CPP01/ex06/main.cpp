/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:37:29 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/29 13:37:30 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl harl;

	std::cout << std::endl << "** DEBUG CALL **" << std::endl;
	harl.complain("debug");
	std::cout << std::endl << "** INFO CALL **" << std::endl;
	harl.complain("info");
	std::cout << std::endl << "** WARNING CALL **" << std::endl;
	harl.complain("warning");
	std::cout << std::endl << "** ERROR CALL **" << std::endl;
	harl.complain("error");
	std::cout << std::endl << "** DEFAULT CALL **" << std::endl;
	harl.complain("something else");
	std::cout << std::endl << "** EMPTY STRING CALL **" << std::endl;
	harl.complain("");
	std::cout << std::endl;
	return (0);
}
