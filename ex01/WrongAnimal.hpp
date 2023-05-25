/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:48:32 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/25 13:48:32 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(/* args */);
	WrongAnimal(const WrongAnimal &obj);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &rhs);
	std::string getType() const;
	void makeSound() const;
};

#endif