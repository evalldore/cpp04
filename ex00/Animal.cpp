/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:02:04 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 14:31:50 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal() {
	_type = "Animal";
	std::cout << "Animal default constructor!" << std::endl;
}

Animal::Animal(const Animal& other) {
	_type = other._type;
	*this = other;
	std::cout << "Animal copy constructor!" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal default destructor!" << std::endl;
}

const std::string& Animal::getType() const {
	return (_type);
}

void Animal::makeSound() const {
	std::cout << "The money got different";
}

const Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Animal copy operator!" << std::endl;
	this->_type = other._type;
	return (*this);
}