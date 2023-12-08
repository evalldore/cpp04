/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:22:33 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/08 17:38:54 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor!" << std::endl;
};

Cat::Cat(const Cat& other) : Animal(other) {
	_brain = new Brain(*other._brain);
	(*this) = other;
	std::cout << "Cat copy constructor " << std::endl;
};

Cat::~Cat() {
	std::cout << "Cat default destructor!" << std::endl;
	delete _brain;
};

const Cat &Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	*_brain = *other._brain;
	_type = other._type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "miau";
}