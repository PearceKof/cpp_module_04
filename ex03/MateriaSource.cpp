/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:59:09 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 17:59:09 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for(int i(0) ; i < 4 ; i++)
	{
		if(materias[i])
			delete materias[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

MateriaSource& MateriaSource::operator=( MateriaSource const & rhs )
{
	for(int i = 0; i < 4; i++)
	{
		materias[i] = rhs.materias[i];
	}
	return *this;
}

AMateria* MateriaSource::getMateria( std::string const & type )
{
	for(int i = 0; i < 4; i++)
	{
		if(materias[i] && materias[i]->getType() == type)
			return materias[i];
	}
	return NULL;
}

void	MateriaSource::learnMateria( AMateria* m )
{
	for(int i = 0; i < 4; i++)
	{
		if(materias[i] == NULL)
		{
			materias[i] = m;
			return;
		}
	}
}

AMateria*   MateriaSource::createMateria( std::string const& type ) {
	for(int i = 0; i < 4; i++)
	{
		if(materias[i] && materias[i]->getType() == type)
			return(materias[i]->clone());
	}
	return(NULL);
}