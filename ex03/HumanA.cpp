/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:05:25 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/03 20:05:27 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name ,Weapon &_ref) : _name(name), _weapon(_ref)
{
	std::cout <<"Human " << _name << "constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout <<"Human " << _name << "destructor called" << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with: " << _weapon.getType() << std::endl;
}
