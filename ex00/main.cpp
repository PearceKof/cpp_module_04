/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:53:47 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 14:14:01 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* i_cat = new Cat();
const Animal* j_dog = new Dog();

std::cout  << "\n" << i_cat->getType() << " should be cat" << std::endl;
std::cout << j_dog->getType() << " should be dog" << std::endl;

std::cout << "\nthe cat do miaou :\n" << std::endl;
i_cat->makeSound(); //will output the cat sound!

std::cout << "\nthe dog do wouf :\n" << std::endl;
j_dog->makeSound();

std::cout << "\nthe animal do animal sound :\n" << std::endl;
meta->makeSound();

std::cout << "\ntest with WrongCat :\n" << std::endl;

const WrongAnimal* wrongCat = new WrongCat();

std::cout << "\n" << wrongCat->getType() << " should be wrong cat" << std::endl;

std::cout << "\nthe wrong cat do wrong animal sound :\n" << std::endl;
wrongCat->makeSound();

std::cout << "\nall object are freed and the destructors are called :\n" << std::endl;

delete meta;
delete i_cat;
delete j_dog;
delete wrongCat;

return 0;
}