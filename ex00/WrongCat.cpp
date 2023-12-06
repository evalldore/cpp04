/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:22:33 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/06 15:52:41 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "Wrong Cat";
	std::cout << "Wrong Cat default constructor!" << std::endl;
};

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat default destructor!" << std::endl;
};

void WrongCat::makeSound() const {
	std::cout << "wtf boom";
}