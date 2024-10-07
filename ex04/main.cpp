/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:34:12 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/07 19:34:14 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	ft_replace(std::string buff, std::string s1, std::string s2)
{
	//encontrar el s1 en el buff
	//eliminar el s1 del buff
	//escribir en buff[posicion de inicio de s1] hasta lo que ocupe s2, y desplazar los caracters restantes del buff
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	std::string buff;
	std::ifstream input(argv[1]);
	//should add argv[1] + .replace
	std::ofstream output(".replace");
	if (!input.is_open())
	{
		std::cout << "unable to open " << argv[1] << std::endl;
		return (1);
	}
	//std::cout << "archivo abierto con el siguiente contenido : " << std::endl;
	while (std::getline(input, buff))
	{
		ft_replace(buff, argv[2], argv[3]);
		output << buff << std::endl;
	}
	input.close();

	return (0);
}
