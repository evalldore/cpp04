/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:51:53 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 14:46:42 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

static void	collection(void)
{
	std::cout << "COLLECTION\n" << std::endl;
	Animal*	array[20];
	int			i;

	for (i = 0; i < 10; i++)
		array[i] = new Dog();
	for (i = 10; i < 20; i++)
		array[i] = new Cat();
	
	for (i = 0; i < 20; i++)
	{
		std::cout << array[i]->getType() << " says ";
		array[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	for (i = 0; i < 20; i++)
	{
		delete array[i];
		array[i] = NULL;
	}
}

static void copy(void)
{
	std::cout << "\nCOPY\n" << std::endl;
	std::cout << "\nCAT\n" << std::endl;
	Cat	ca;
	Cat cb(ca);
	Cat cc;

	cc = ca;

	std::cout << "\nDOG\n" << std::endl;

	Dog	da;
	Dog db(da);
	Dog dc;

	dc = da;

	std::cout << "\nCOPY DESTRUCTORS\n" << std::endl;
}

static void heap(void)
{
	std::cout << "\nHEAP\n" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\nHEAP DESTRUCTORS\n" << std::endl;
	delete j;
	delete i;
}

int	main(void)
{
	collection();
	copy();
	heap();
}
