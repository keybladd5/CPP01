/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:56:58 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/09 18:57:00 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl destructor called" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[debug]\nThe truth is that of everything I have read on the eval sheet, I understand half of it, due to my bad i N Gl i SH" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[info]\nSwitch state...WHAT? NORMV3 SAYS THAT COULDN'T BE POSSIBLE NEVER. NO.NO.NO.NO!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[warning]\nYou tell me things in English very very quickly I'm blinking to process it, pure AMD 3.2 GHZ" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[error]\nGOOGLE TRANSLATE API IS NOT WORKING... HELP ME AHORAAAAAAAA" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string harl_levels[4] ={"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4)
	{
		if (level == harl_levels[i])
			break;
		i++;
	} 
	switch(i)
	{
		case 0:
				debug();
		case 1:
				info();
		case 2:
				warning();
		case 3:
				error();
				break;
		default:
				std::cout << "[what u write brow?]\nI c???nt unnddd???rsnnd??t n??th1??ng!$$:" << std::endl;
	}
}
