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
	_f[0] = &Harl::debug;
	_f[1] = &Harl::info;
	_f[2] = &Harl::warning;
	_f[3] = &Harl::error;
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
	std::cout << "[info]\nIf the syntax for pointers to functions in C is already screwed, the syntax for pointers to member functions is crazy brow" << std::endl;
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
	for (int i = 0; i < 4; i++)
	{
		if (level == harl_levels[i])
			(this->*_f[i])();
	} 
}
