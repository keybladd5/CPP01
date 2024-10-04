/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:04:58 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/03 20:05:00 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str)
{
	std::cout <<" Weapon constructor called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout <<" Weapon destructor called" << std::endl;
}