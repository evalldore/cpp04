/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:37:37 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 15:01:24 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public AAnimal {
	public:
		Dog(void);
		Dog(const Dog& other);
		~Dog(void);
		void	makeSound(void) const;
		const Dog &operator=(const Dog& other);
};