/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:32:11 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/10 19:32:14 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	Harl hal;
	std::cout << "Welcome to spaniard Harl version... Hal!" << std::endl;
	std::string buff(argv[1]);
	hal.complain(buff);
	return (0);
}
