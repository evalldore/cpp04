/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:53:51 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/08 16:33:29 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal {
	public :
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal(void);

		virtual void	makeSound(void) const;
		const std::string&	getType(void) const;
		const Animal &operator=(const Animal& other);
	protected :
		std::string		_type;
};