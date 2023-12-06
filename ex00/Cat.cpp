/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:22:33 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/05 19:14:24 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat default constructor!" << std::endl;
};

Cat::~Cat() {
	std::cout << "Cat default destructor!" << std::endl;
};

void Cat::makeSound() const {
	std::cout << "miau";
}