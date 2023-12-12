/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:51:53 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 15:04:06 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	//AAnimal a;
	Cat c;
	Dog d;

	Cat *hc = new Cat(c);
	Dog *dc = new Dog(d);

	delete hc;
	delete dc;
}
