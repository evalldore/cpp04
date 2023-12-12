/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:53:51 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 14:20:56 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal {
	public :
		AAnimal(void);
		AAnimal(const AAnimal &other);
		virtual ~AAnimal(void);

		virtual void	makeSound(void) const = 0;
		const std::string&	getType(void) const;
		const AAnimal &operator=(const AAnimal& other);
	protected :
		std::string		_type;
};