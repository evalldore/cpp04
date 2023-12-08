/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:22:33 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/08 17:45:03 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor!" << std::endl;
};

Dog::Dog(const Dog& other) : Animal(other) {
	_brain = new Brain(*other._brain);
	(*this) = other;
	std::cout << "Dog copy constructor " << std::endl;
};

Dog::~Dog() {
	std::cout << "Dog default destructor!" << std::endl;
	delete _brain;
};

const Dog &Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	*_brain = *other._brain;
	_type = other._type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "bow";
}