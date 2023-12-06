/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:53:51 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/05 19:13:09 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal {
	public :
		Animal(void);
		virtual ~Animal(void);

		virtual void	makeSound(void) const;
		const std::string&	getType(void) const;
	protected :
		std::string		_type;
};