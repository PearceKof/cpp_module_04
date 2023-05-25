/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:33:18 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/24 15:16:49 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "[ Cat ] Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &obj) : Animal()
{
	std::cout << "[ Cat ] Copy constructor called" << std::endl;
	this->type = obj.type;
}

Cat::~Cat()
{
	std::cout << "[ Cat ] Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "[ Cat ] Copy assignement operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou uwu i'm a cat." << std::endl;
}