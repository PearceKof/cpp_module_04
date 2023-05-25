/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:34:11 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 15:59:02 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(), dogBrain(new Brain)
{
	std::cout << "[ Dog ] Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &obj): Animal(), dogBrain(new Brain)
{
	std::cout << "[ Dog ] Copy constructor called" << std::endl;
	this->type = obj.type;
	*(this->dogBrain) = *(obj.dogBrain);
}

Dog::~Dog()
{
	std::cout << "[ Dog ] Destructor called" << std::endl;
	delete dogBrain;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "[ Dog ] Copy assignement operator called" << std::endl;
	this->type = rhs.type;
	*(this->dogBrain) = *(rhs.dogBrain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouf :°3 i'm a dog." << std::endl;
}
