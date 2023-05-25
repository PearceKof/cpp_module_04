/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:00:57 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 18:00:57 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*materias[4];

public:
	MateriaSource();
	~MateriaSource();

	MateriaSource(MateriaSource const &);
	MateriaSource&  operator=(MateriaSource const &);

	AMateria	*getMateria(std::string const & type);
	AMateria	*createMateria(std::string const & type);
	void	learnMateria(AMateria*);
};


#endif