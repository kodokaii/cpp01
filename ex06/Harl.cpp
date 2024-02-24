/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/24 15:43:00 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const t_harl_func	Harl::complainFunc[LEVEL_COUNT]
	= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
const std::string	Harl::levelString[LEVEL_COUNT]
	= {"DEBUG", "INFO", "WARNING", "ERROR"};

void			Harl::debug(void)
{
	std::cout << DEBUG_MSG << std::endl;
}

void			Harl::info(void)
{
	std::cout << INFO_MSG << std::endl;
}

void			Harl::warning(void)
{
	std::cout << WARNING_MSG << std::endl;
}

void			Harl::error(void)
{
	std::cout << ERROR_MSG << std::endl;
}

unsigned int	Harl::levelToIndex(const std::string &level)
{
	unsigned int	i(0);

	while (i < LEVEL_COUNT && Harl::levelString[i] != level)
		i++;
	return (i);
}

void	Harl::complain(std::string level)
{
	unsigned int	index(Harl::levelToIndex(level));
	
	if (index == LEVEL_COUNT)
		std::cerr << "Harl::complain: Invalid level" << std::endl;
	else
		(this->*Harl::complainFunc[index])();
}

void	Harl::complainFilter(const std::string &filter)
{
	unsigned int	index(Harl::levelToIndex(filter));

	if (index == LEVEL_COUNT)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		while (index < LEVEL_COUNT)
		{
			std::cout << "[ " << Harl::levelString[index] << " ]" << std::endl;
			(this->*Harl::complainFunc[index])();
			std::cout << std::endl;
			index++;
		}
	}
}
