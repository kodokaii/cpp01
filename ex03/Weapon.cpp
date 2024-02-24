/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/23 17:47:15 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

					Weapon::Weapon(void)
{
	this->type = "None";
}

					Weapon::Weapon(const std::string &type)
{
	this->type = type;
}

const std::string	&Weapon::getType(void) const
{
	return (this->type);
}

void				Weapon::setType(const std::string &type)
{
	this->type = type;
}
