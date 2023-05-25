/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:33:18 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 15:58:40 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), catBrain(new Brain)
{
	std::cout << "[ Cat ] Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &obj) : Animal(), catBrain(new Brain)
{
	std::cout << "[ Cat ] Copy constructor called" << std::endl;
	this->type = obj.type;
	*(this->catBrain) = *(obj.catBrain);
}

Cat::~Cat()
{
	std::cout << "[ Cat ] Destructor called" << std::endl;
	delete catBrain;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "[ Cat ] Copy assignement operator called" << std::endl;
	this->type = rhs.type;
	*(this->catBrain) = *(rhs.catBrain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou uwu i'm a cat." << std::endl;
}