/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:39:58 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 16:39:58 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("")
{
}

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::AMateria(AMateria const & obj) : type(obj.type)
{
	*this = obj;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria & rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

AMateria* AMateria::clone() const
{
	return ((AMateria *)this);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}