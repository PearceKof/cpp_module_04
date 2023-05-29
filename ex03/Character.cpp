/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:28:39 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 17:28:39 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name)
{
    for (int i(0) ; i < 4 ; i++)
    {
        this->inventory[i] = NULL;
    }
    std::cout << "Character " << this->name << " created" << std::endl;
}

Character::Character(Character const & src) : name(src.name)
{
	for (int i(0) ; i < 4 ; i++)
    {
        this->inventory[i] = NULL;
    }
    *this = src;
    std::cout << "Character " << this->name << " created" << std::endl;
}

Character& Character::operator=(Character const & rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.getName();
        for (int i(0) ; i < 4 ; i++)
        {
        	if (this->inventory[i])
        		delete this->inventory[i];
    	}
        for (int i(0) ; i < 4 ; i++)
		{
			if (rhs.inventory[i])
            	this->inventory[i] = rhs.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
    }
    return (*this);
}

Character::~Character()
{
    // std::cout << "Character " << this->name << " destroyed" << std::endl;
    for (int i(0) ; i < 4 ; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

void    Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (int i(0) ; i < 4 ; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            std::cout << "Character " << this->name << " equipped " << m->getType() << " at " << i << std::endl;
            return;
        }
    }
    std::cout << "Character " << this->name << " has a full inventory." << std::endl;
}

void    Character::unequip(int idx)
{
    if (idx > 3 or idx < 0)
    {
        std::cout << "Invalid index. Must be between 0 and 3." << std::endl;
    }
    else if (this->inventory[idx])
    {
        this->inventory[idx] = NULL;
        std::cout << "Character " << this->name << " unequipped" << std::endl;
    }
    else
        std::cout << "Character " << this->name << " can't unequip" << std::endl;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx > 3 or idx < 0)
    {
        std::cout << "Invalid index. Must be between 0 and 3." << std::endl;
    }
    else if (this->inventory[idx])
    {
        this->inventory[idx]->use(target);
    }
    else
        std::cout << "There is nothing at this index in the inventory." << std::endl;
}

std::string const& Character::getName() const
{
    return this->name;
}

