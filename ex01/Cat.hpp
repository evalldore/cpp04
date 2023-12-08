/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:18:54 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/08 16:24:23 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public :
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);
		void	makeSound(void) const;
		const Cat& operator=(const Cat& other);
	private :
		Brain	*_brain;
};