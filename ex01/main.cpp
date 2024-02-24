/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/24 18:49:14 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define ZOMBIE_COUNT 7

int	main(int argc, char *argv[])
{
	Zombie	*zombie;
	int		i(0);

	if (1 < argc)
		zombie = zombieHorde(ZOMBIE_COUNT, argv[1]);
	else
		zombie = zombieHorde(ZOMBIE_COUNT, "Fizz");
	while (i < ZOMBIE_COUNT)
		zombie[i++].announce();
	delete[] zombie;
	return (0);
}
