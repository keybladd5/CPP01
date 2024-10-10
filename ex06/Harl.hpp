/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:57:12 by polmarti          #+#    #+#             */
/*   Updated: 2024/10/09 18:57:14 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
	public:
			Harl();
			~Harl();
			void	complain(std::string level);
};

#endif
