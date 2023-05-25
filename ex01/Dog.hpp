/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:33:33 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 14:56:03 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *dogBrain;
public:
	Dog();
	Dog(const Dog &obj);
	~Dog();
	Dog &operator=(const Dog &rhs);
	void makeSound() const;
};


#endif