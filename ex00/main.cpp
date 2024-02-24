/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/20 19:07:06 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char *argv[])
{
	Zombie	*zombie;

	if (1 < argc)
		zombie = newZombie(argv[1]);
	else
		zombie = newZombie("Fizz");
	zombie->announce();
	if (2 < argc)
		randomChump(argv[2]);
	else
		randomChump("Buzz");
	delete zombie;
	return (0);
}
