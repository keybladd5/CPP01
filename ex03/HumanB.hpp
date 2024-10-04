/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:06:01 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/03 20:06:04 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
	private:

			std::string _name;
			Weapon 		*_weapon;

	public:
			HumanB(std::string name);
			HumanB(std::string name, Weapon *ptr);
			~HumanB();
			void	attack();
			void	setWeapon(Weapon *ptr);
};

#endif
