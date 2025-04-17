/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlehmeye <nlehmeye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:26:51 by nlehmeye          #+#    #+#             */
/*   Updated: 2025/04/15 16:26:52 by nlehmeye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {std::cout << "Brain Constructor Called." << std::endl;}
Brain::Brain(const Brain &copy) {*this = copy; std::cout << "Brain Copy Constructor Called." << std::endl;}
Brain& Brain::operator=(const Brain &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
		{
			std::cout << "Brain Assignment Operator Called." << std::endl;
			_ideas[i] = copy._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain() {std::cout << "Brain Destructor Called." << std::endl;}

const std::string Brain::getIdea(size_t i) const
{
	if (i >= 0 && i < 100)
		return (this->_ideas[i]);
	else
		return ("ERROR: Idea number is not within 0-99.");
}

void Brain::setIdea(size_t i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "ERROR: Idea number is not within 0-99." << std::endl;
}
