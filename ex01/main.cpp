/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:51:16 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/02 20:51:18 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int n;
	std::string buff;

	std::cout << "Welcome, now we gona create a zombie horde on the HEAP!" << std::endl;
	std::cout << "Please enter how many big il be the horde and the name:" << std::endl;
	std::cout << "number of zombies: ";
	std::cin >> n;
	if (std::cin.fail())
	{
		while(std::cin.fail())
		{
			std::cout << "please, a number!" << std::endl;
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cin >> n;
		}
	}
	std::cout << "zombies name (yes, one name for all, idk too): ";
	std::cin >> buff;
	Zombie *horde = zombieHorde(n, buff);
	delete[] horde;
	return 0;
}
