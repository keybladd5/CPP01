/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:59:52 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/03 20:04:44 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <string>

class Weapon
{
	private:

			std::string _type;			

	public:
			Weapon(std::string);
			~Weapon();
			std::string const &getType(void);
			void setType(std::string); 
};

#endif
