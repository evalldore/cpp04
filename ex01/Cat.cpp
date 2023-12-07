/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:22:33 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/06 21:04:11 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor!" << std::endl;
};

Cat::~Cat() {
	std::cout << "Cat default destructor!" << std::endl;
	delete _brain;
};

void Cat::makeSound() const {
	std::cout << "miau";
}