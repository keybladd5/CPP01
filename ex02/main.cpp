/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:54:05 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/03 18:54:06 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "test string";
	std::string *ptr = &str;
	std::string &ref = str;
	std::cout << "|var    : cout " << std::endl;
	std::cout << "---------" << std::endl;
	std::cout << "|str var: " << str << std::endl;
	std::cout << "|str ref: " << ref << std::endl;
	std::cout << "|str*ptr: " << *ptr << std::endl;
	std::cout << "|str ptr: " << ptr << std::endl;
	std::cout << "|&str   : " << &str << std::endl;
	std::cout << "|&ref   : " << &ref << std::endl;

	return (0);
}
