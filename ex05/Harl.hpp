/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/24 15:30:15 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>
#include <sstream>
#include <cstdio>
#include <iostream>

#define LEVEL_COUNT		4

#define DEBUG_MSG	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!"

#define INFO_MSG	"I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!"
#define WARNING_MSG	"I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month."
#define ERROR_MSG	"This is unacceptable!, I want to speak to the manager now."

class Harl;

typedef void (Harl::*t_harl_func)(void);

class Harl
{
	private:
		static const t_harl_func	complainFunc[LEVEL_COUNT];
		static const std::string	levelString[LEVEL_COUNT];

		void						debug(void);
		void						info(void);
		void						warning(void);
		void						error(void);
		static unsigned int			levelToIndex(const std::string &level);

	public:
		void	complain(std::string level);
};

#endif
