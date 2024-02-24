/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/24 16:25:44 by nlaerema         ###   ########.fr       */
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

	switch (index)
	{
		case 0: 
			std::cout << "[ " << Harl::levelString[0] << " ]" << std::endl;
			(this->*Harl::complainFunc[0])();
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case 1:
			std::cout << "[ " << Harl::levelString[1] << " ]" << std::endl;
			(this->*Harl::complainFunc[1])();
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case 2:
			std::cout << "[ " << Harl::levelString[2] << " ]" << std::endl;
			(this->*Harl::complainFunc[2])();
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case 3:
			std::cout << "[ " << Harl::levelString[3] << " ]" << std::endl;
			(this->*Harl::complainFunc[3])();
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

//much better than a switch

/* 
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
*/
