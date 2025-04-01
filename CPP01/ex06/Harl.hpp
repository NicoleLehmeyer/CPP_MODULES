/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:37:05 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/03/29 13:37:06 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl {

	public:
		Harl();
		~Harl();
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};
