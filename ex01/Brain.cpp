/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:26:58 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 14:26:58 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[ Brain ] Default constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "[ Brain ] Copy constructor called" << std::endl;
	for (int i(0) ; i < 100 ; i++)
	{
		this->ideas[i] = obj.ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "[ Brain ] Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "[ Brain ] Copy assignement operator called" << std::endl;
	for (int i(0) ; i < 100 ; i++)
	{
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}
