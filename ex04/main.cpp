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

void	ft_replace(std::string &buff, std::string s1, std::string s2)
{
	size_t length_buff = buff.length(), pos = buff.find(s1);
	std::string str;
	while(pos != std::string::npos)
	{
		buff = buff.substr(0, pos) + s2 + buff.substr(buff.find(s1) + s1.length(), length_buff);
		pos = buff.find(s1, pos + s2.length());
	}
}
int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	std::string buff;
	std::ifstream input(argv[1]);
	if (!input.is_open())
	{
		std::cout << "unable to open " << argv[1] << std::endl;
		return (1);
	}
	buff = argv[1];
	buff += ".replace";
	std::ofstream output(buff.c_str());
	buff.erase();
	while (std::getline(input, buff))
	{
		ft_replace(buff, std::string(argv[2]), std::string(argv[3]));
		output << buff << std::endl;
	}
	input.close();
	return (0);
}
