/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:22:33 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 14:58:54 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "Wrong Cat";
	std::cout << "Wrong Cat default constructor!" << std::endl;
};

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal() {
	*this = other;
	std::cout << "Wrong Cat copy constructor!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat default destructor!" << std::endl;
};

void WrongCat::makeSound() const {
	std::cout << "Because of what im spending";
}

const WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Wrong Cat copy operator!" << std::endl;
	this->_type = other._type;
	return (*this);
}