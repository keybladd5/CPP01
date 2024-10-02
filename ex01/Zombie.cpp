/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:45:16 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/01 18:45:19 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie constructor called" << std::endl;
}
Zombie::Zombie(std::string new_name) //: _name(new_name)
{
	_name = new_name;
	std::cout << _name << ": constructor called" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << _name << ": destructor called" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string new_name)
{
	_name = new_name;
}
