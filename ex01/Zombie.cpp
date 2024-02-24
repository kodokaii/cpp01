/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/23 17:09:12 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void	Zombie::init(const std::string &name)
{
	this->name = name;
	std::cout << this->name << ": Born" << std::endl;
}

		Zombie::Zombie(const std::string &name)
{
	this->init(name);
}

		Zombie::Zombie(void)
{
	this->init("Unnamed");
}

void	Zombie::setName(const std::string &name)
{
	this->name = name;
}

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

		Zombie::~Zombie(void)
{
	std::cout << this->name << ": Die" << std::endl;
}
