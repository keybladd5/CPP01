/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:06:11 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/03 20:06:12 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout <<"HumanB " << _name << " constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout <<"HumanB " << _name << " destructor called" << std::endl;
}
void	HumanB::setWeapon(Weapon &ref)
{
	_weapon = &ref;		
}
void	HumanB::attack()
{
	std::cout << _name << " attacks with: ";
	if (_weapon)
		std::cout << _weapon->getType();
	else
		std::cout << "no weapon";
	std::cout << std::endl;
}
