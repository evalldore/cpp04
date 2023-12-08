/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:02:04 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/08 16:33:58 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal() {
	_type = "Animal";
	std::cout << "Animal default constructor!" << std::endl;
}

Animal::Animal(const Animal& other) {
	(*this) = other;
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
	this->_type = other._type;
	return (*this);
}