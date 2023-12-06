/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:02:04 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/06 15:53:03 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	_type = "Wrong Animal";
	std::cout << "Wrong Animal default constructor!" << std::endl;
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
