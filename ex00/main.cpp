/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:53:47 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/23 14:41:54 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main() {
const Animal* meta = new Animal(); const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl; std::cout << i->getType() << " " << std::endl; i->makeSound(); //will output the cat sound! j->makeSound();
meta->makeSound(); ...
return 0; }