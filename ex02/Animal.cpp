/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:02:04 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/06 21:18:51 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

AAnimal::AAnimal(): _type("Animal") {
	std::cout << "Animal default constructor!" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "Animal default destructor!" << std::endl;
}

const std::string& AAnimal::getType() const {
	return (_type);
}
