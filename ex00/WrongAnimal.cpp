/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:48:22 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 13:48:22 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("")
{
	std::cout << "[ WrongAnimal ] Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "[ WrongAnimal ] Copy constructor called" << std::endl;
	this->type = obj.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[ WrongAnimal ] Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "[ WrongAnimal ] Copy assignement operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "* wrong animal sound *" << std::endl;
}