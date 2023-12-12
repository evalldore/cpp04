/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:18:54 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 15:01:19 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public AAnimal {
	public :
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);
		void	makeSound(void) const;
		const Cat &operator=(const Cat& other);
	protected :
		
};