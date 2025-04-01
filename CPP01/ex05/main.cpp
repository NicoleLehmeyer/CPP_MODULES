/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:20:03 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/19 16:20:05 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl harl;

	std::cout << "CALL: debug" << std::endl;
	harl.complain("debug");
	std::cout << "CALL: info" << std::endl;
	harl.complain("info");
	std::cout << "CALL: warning" << std::endl;
	harl.complain("warning");
	std::cout << "CALL: error" << std::endl;
	harl.complain("error");
	return (0);
}