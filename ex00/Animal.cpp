/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:35:26 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/23 13:53:42 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("")
{
}

Animal::Animal(const Animal &rhs)
{
	this->type = rhs.type;
}

Animal::~Animal()
{
}

std::string Animal::getType()
{
	return (this->type);
}

void Animal::makeSound() const
{
	if (type == "Cat")
	{
		std::cout << "miaou" << std::endl;
	}
	else if (type == "Dog")
	{
		std::cout << "Wouf" << std::endl;
	}
	else
	{
		std::cout << "* Uncanny sound *" << std::endl;
	}
}