/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/24 15:40:59 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int	main(int argc, char *argv[])
{
	Harl	harl;

	if (argc != 2)
	{
		if (argc < 2)
			std::cerr << "Usage: " << argv[0] << " filter" << std::endl;
		else
			std::cerr << argv[0] << ": too many arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	harl.complainFilter(argv[1]);
}
