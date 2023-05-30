/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:57:44 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 17:57:44 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	*this = src;
}

Ice &Ice::operator=(const Ice& rhs)
{
	this->type = rhs.type;
	return(*this);
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "\033[1;34m" << "* shoots an ice bolt at " << target.getName() << " *" << "\033[0m" << std::endl;
}