/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/23 18:01:31 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void	humanA(Weapon club)
{
	HumanA	bob("Bob", club);

	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}

void	humanB(Weapon club)
{
	HumanB	jim("Jim");

	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}


int	main(void)
{
	humanA(Weapon("crude spiked club"));
	humanB(Weapon("crude spiked club"));
	return (0);
}
