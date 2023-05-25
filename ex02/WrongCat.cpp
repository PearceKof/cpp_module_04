/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:53:54 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 13:53:54 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "[ WrongCat ] Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal()
{
	std::cout << "[ WrongCat ] Copy constructor called" << std::endl;
	this->type = obj.type;
}

WrongCat::~WrongCat()
{
	std::cout << "[ WrongCat ] Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "[ WrongCat ] Copy assignement operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Miaou uwu i'm a wrong cat." << std::endl;
}
