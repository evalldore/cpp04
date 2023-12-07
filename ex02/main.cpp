/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:51:53 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/06 21:23:00 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	std::auto_ptr<AAnimal> array[20];
	int	i;

	for (i = 0; i < 10; i++)
		array[i].reset(new Dog());
	for (i = 10; i < 20; i++)
		array[i].reset(new Cat());
	
	for (i = 0; i < 20; i++)
	{
		std::cout << array[i]->getType() << " says ";
		array[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
