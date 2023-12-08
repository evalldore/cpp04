/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:21:06 by niceguy           #+#    #+#             */
/*   Updated: 2023/12/08 17:01:00 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain default constructor!" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor!" << std::endl;
	(*this) = other;
}

Brain::~Brain() {
	std::cout << "Brain default destructor!" << std::endl;
}

const Brain& Brain::operator=(const Brain& other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < MAX_IDEAS; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << "Brain copy content from " << &other << " to " << this << std::endl;
	return (*this);
}