/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:26:59 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 16:27:00 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain {
	private:
		std::string _ideas[100];
	
	public:
		Brain();
		Brain(const Brain &copy);
		Brain& operator=(const Brain &copy);
		~Brain();

		const std::string getIdea(size_t i)const;
		void setIdea(size_t i, std::string idea);
};
