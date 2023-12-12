/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:40:26 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 15:01:31 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal() {
	(*this) = other;
	std::cout << "Dog Copy constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog default destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "bow";
}

const Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Dog copy operator!" << std::endl;
	this->_type = other._type;
	return (*this);
}