/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:44:39 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/01 18:44:42 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string buff;
	std::cout << "TEST: Heap VS Stack" << std::endl;
	std::cout << "Heap zombie requires a name: ";
	std::cin >> buff;
	Zombie *heap = newZombie(buff);
	heap->announce();
	std::cout << "Stack zombie requires a name: ";
	std::cin >> buff;
	randomChump(buff);
	delete heap;
	return (0);
}

