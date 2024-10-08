/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:05:35 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/03 20:05:37 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
	private:

			std::string _name;
			Weapon 		&_weapon;

	public:
			HumanA(std::string name ,Weapon &_ref);
			~HumanA(void);
			void	attack(void);
};

#endif
