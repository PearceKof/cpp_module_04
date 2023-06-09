/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:39:39 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 16:39:39 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << "---------" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		Character* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		Character* bob = new Character("bob");

		std::cout << "\ntest copy constructor & assignation operator :\n" << std::endl;
		Character *meCopy = new Character(*me);
		std::cout << "----" << std::endl;
		Character *bobCopy = new Character(*bob);
		std::cout << "----" << std::endl;

		me->use(0, *bob);
		me->use(1, *bob);

		std::cout << "----" << std::endl;
		meCopy->use(0, *bobCopy);
		meCopy->use(1, *bobCopy);

		std::cout << "\ntest unequip :\n" << std::endl;

		me->unequip(1);

		meCopy->use(0, *bobCopy);
		meCopy->use(1, *bobCopy);
		me->use(0, *bob);
		me->use(1, *bob);

		delete tmp;
		delete src;
		delete bob;
		delete bobCopy;
		delete me;
		delete meCopy;
	}
	return 0;
}