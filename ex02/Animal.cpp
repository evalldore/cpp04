/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:02:04 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 14:20:51 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

AAnimal::AAnimal(): _type("Animal") {
	std::cout << "AAnimal default constructor!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other): _type(other._type) {
	*this = other;
	std::cout << "AAnimal copy constructor!" << std::endl;
}


AAnimal::~AAnimal() {
	std::cout << "AAnimal default destructor!" << std::endl;
}

const std::string& AAnimal::getType() const {
	return (_type);
}

const AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}