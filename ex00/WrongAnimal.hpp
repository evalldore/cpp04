/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:53:51 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 14:53:12 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal {
	public :
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& other);
		virtual ~WrongAnimal(void);

		void	makeSound(void) const;
		const std::string&	getType(void) const;
		const WrongAnimal &operator=(const WrongAnimal& other);
	protected :
		std::string		_type;
};