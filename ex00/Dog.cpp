/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:40:26 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/05 19:14:32 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog default destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "bow";
}