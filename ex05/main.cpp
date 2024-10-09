/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:56:38 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/09 18:56:39 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl hal;
	std::cout << "Welcome to spaniard Harl version... Hal!" << std::endl;
	hal.complain("DEBUG");
	hal.complain("INFO");
	hal.complain("WARNING");
	hal.complain("ERROR");
	return (0);
}
