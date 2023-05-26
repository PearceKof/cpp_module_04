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
    //std::cout << "Character " << this->name << " created" << std::endl;
}

Character::Character(Character const & src) : name(src.name)
{
    *this = src;
    //std::cout << "Character " << this->name << " created" << std::endl;
}

Character& Character::operator=(Character const & rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.name;
        for (int i(0) ; i < 4 ; i++)
            this->inventory[i] = rhs.inventory[i];
    }
    return *this;
}

Character::~Character()
{
    //std::cout << "Character " << this->name << " destroyed" << std::endl;
    for (int i(0) ; i < 4 ; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

void    Character::equip(AMateria* m)
{
    for (int i(0) ; i < 4 ; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            //std::cout << "Character " << this->name << " equipped with " << m->getType() << std::endl;
            return;
        }
        // std::cout << "Character " << this->name << " can't equip " << m->getType() << std::endl;
    }
}

void    Character::unequip( int idx )
{
    if (this->inventory[idx])
    {
        delete this->inventory[idx];
        this->inventory[idx] = NULL;
        std::cout << "Character " << this->name << " unequipped" << std::endl;
    }
    else
        std::cout << "Character " << this->name << " can't unequip" << std::endl;
}

void    Character::use( int idx, ICharacter& target )
{
    if (this->inventory[idx])
    {
        this->inventory[idx]->use(target);
        //std::cout << "Character " << this->name << " uses " << this->inventory[idx]->getType() << std::endl;
    }
    else
        std::cout << "There is nothing at this index in the inventory." << std::endl;
}

std::string const& Character::getName() const
{
    return this->name;
}

