/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:35:26 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/24 15:08:00 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("")
{
	std::cout << "[ Animal ] Default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "[ Animal ] Copy constructor called" << std::endl;
	this->type = obj.type;
}

Animal::~Animal()
{
	std::cout << "[ Animal ] Destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "[ Animal ] Copy assignement operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "* random animal sound *" << std::endl;
}
