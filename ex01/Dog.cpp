/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:40:26 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/06 21:04:17 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog default destructor" << std::endl;
	delete _brain;
}

void Dog::makeSound() const {
	std::cout << "bow";
}