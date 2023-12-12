/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:22:33 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 14:31:23 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat default constructor!" << std::endl;
};

Cat::Cat(const Cat& other) : Animal() {
	*this = other;
	std::cout << "Cat copy constructor!" << std::endl;
};

Cat::~Cat() {
	std::cout << "Cat default destructor!" << std::endl;
};

void Cat::makeSound() const {
	std::cout << "miau";
}

const Cat& Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Cat copy operator!" << std::endl;
	this->_type = other._type;
	return (*this);
}