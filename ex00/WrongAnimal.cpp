/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:02:04 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 14:55:23 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Wrong Animal") {
	std::cout << "Wrong Animal default constructor!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
	std::cout << "Wrong Animal copy constructor!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal default destructor!" << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return (_type);
}

void WrongAnimal::makeSound() const {
	std::cout << "Because of what im spending";
}

const WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Wrong Animal copy operator!" << std::endl;
	this->_type = other._type;
	return (*this);
}