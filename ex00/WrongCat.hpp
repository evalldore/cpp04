/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:18:54 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 14:58:07 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
		WrongCat(void);
		WrongCat(const WrongCat& other);
		~WrongCat(void);
		void	makeSound(void) const;
		const WrongCat &operator=(const WrongCat& other);
	protected :
		
};