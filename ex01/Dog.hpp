/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:18:54 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/08 16:24:27 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public :
		Dog(void);
		Dog(const Dog& other);
		~Dog(void);
		void	makeSound(void) const;
		const Dog& operator=(const Dog& other);
	private :
		Brain	*_brain;
};