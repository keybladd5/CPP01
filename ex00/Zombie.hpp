/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:00:50 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/01 19:00:51 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
	private:

			std::string _name;

	public:

			Zombie(std::string);
			~Zombie();
			void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
