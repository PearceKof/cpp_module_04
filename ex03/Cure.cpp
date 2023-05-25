/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:54:22 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 17:54:22 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
}

Cure::Cure( Cure const & src ) : AMateria("cure")
{
	*this = src;
}

Cure&	Cure::operator=(const Cure &rhs)
{
	this->type = rhs.type;
	return(*this);
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return(new Cure(*this));
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}