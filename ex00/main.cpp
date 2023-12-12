/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:51:53 by evallee-          #+#    #+#             */
/*   Updated: 2023/12/12 14:57:32 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	std::cout << "CONTRUCTORS\n" << std::endl;
	
	const WrongAnimal wanimal;
	const WrongCat wcat;
	const Animal animal;
	const Animal cat;
	const Animal dog;
	const Cat cat2;
	const Dog dog2;

	std::cout << "\nTYPES\n" << std::endl;

	std::cout << "Wrong Animal type: " << wanimal.getType() << std::endl;
	std::cout << "Wrong Cat type: " << wcat.getType() << std::endl;
	std::cout << "Animal type: " << animal.getType() << std::endl;
	std::cout << "Cat type: " << cat.getType() << std::endl;
	std::cout << "Dog type: " << dog.getType() << std::endl;
	std::cout << "Cat of class Cat: " << cat2.getType() << std::endl;
	std::cout << "Dog of class Dog: " << dog2.getType() << std::endl;

	std::cout << "\nSPEECH\n" << std::endl;

	std::cout << "Animal makes this sound: ";
	animal.makeSound();
	std::cout << std::endl;

	std::cout << "Cat makes this sound: ";
	cat.makeSound();
	std::cout << std::endl;

	std::cout << "Wrong Animal makes this sound: ";
	wanimal.makeSound();
	std::cout << std::endl;

	std::cout << "Wrong Cat makes this sound: ";
	wcat.makeSound();
	std::cout << std::endl;

	std::cout << "Dog makes this sound: ";
	dog.makeSound();
	std::cout << std::endl;

	std::cout << "Cat of class Cat makes this sound: ";
	cat2.makeSound();
	std::cout << std::endl;

	std::cout << "Dog of class Dog makes this sound: ";
	dog2.makeSound();
	std::cout << std::endl;

	std::cout << "\nCOPY\n" << std::endl;

	const Animal RealAnimal;
	const Animal CopyAnimal(RealAnimal);

	const WrongAnimal RealWrongAnimal;
	const WrongAnimal CopyWrongAnimal(RealWrongAnimal);

	const WrongCat RealWrongCat;
	const WrongCat CopyWrongCat(RealWrongCat);

	const Cat RealCat;
	const Cat CopyCat(RealCat);

	const Dog RealDog;
	const Dog CopyDog(RealDog);

	std::cout << "\nAssignement\n" << std::endl;

	WrongCat OtherWrongCat;
	WrongCat AssignWrongCat;

	AssignWrongCat = OtherWrongCat;

	WrongAnimal OtherWrongAnimal;
	WrongAnimal AssignWrongAnimal;

	AssignWrongAnimal = OtherWrongAnimal;

	Animal OtherAnimal;
	Animal AssignAnimal;

	AssignAnimal = OtherAnimal;

	Cat OtherCat;
	Cat AssignCat;

	AssignCat = OtherCat;

	Dog OtherDog;
	Dog AssignDog;

	AssignDog = OtherDog;

	std::cout << "\nDESTRUCTORS\n" << std::endl;
}
