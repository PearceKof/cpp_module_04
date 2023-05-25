/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:53:47 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 16:48:48 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "subjects test :" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "\narray of animals test :\n" << std::endl;

	const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for ( int i(0) ; i < 4; i++ )
	{
		std::cout << "\n" << std::endl;
		animals[i]->makeSound();
		delete animals[i];
	}

	std::cout << "\ncopy test :" << std::endl;

	std::cout << "\ndogTest is created:\n" << std::endl;

	Dog dogTest;

	std::cout << "\ndogtmp1 and dogtmp2 are created and copy test\n" << std::endl;

	Dog dogtmp1(dogTest);
	Dog dogtmp2 = dogTest;
	dogTest = dogtmp1;
	dogtmp2 = dogtmp2;

	//the same test but with cat

	std::cout << "\ncopy test but with cat:" << std::endl;

	std::cout << "\ncatTest is created:\n" << std::endl;

	Cat catTest;

	std::cout << "\ncattmp1 and cattmp2 are created and copy test\n" << std::endl;

	Cat cattmp1(catTest);
	Cat cattmp2 = catTest;
	catTest = cattmp1;
	cattmp2 = cattmp2;

	/*
	just to compare with ex02
	*/
	// std::cout << "\nTEST ANIMAL IS HERE\n" << std::endl;
	// Animal *a = new Animal();
	// delete a;
	// std::cout << "\nTEST ANIMAL END\n" << std::endl;

	std::cout << "\nthe end\n" << std::endl;
	return 0;
}