/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:53:51 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/06 15:54:24 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal {
	public :
		WrongAnimal(void);
		virtual ~WrongAnimal(void);

		virtual void	makeSound(void) const;
		const std::string&	getType(void) const;
	protected :
		std::string		_type;
};