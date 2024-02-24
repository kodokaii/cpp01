/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/23 17:01:32 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	stringREL("HI THIS IS BRAIN");
	std::string *stringPTR(&stringREL);
	std::string &stringREF(stringREL);

	std::cout << "StringREL Addr: " << &stringREL << std::endl;
	std::cout << "StringPTR Addr: " << stringPTR << std::endl;
	std::cout << "StringREF Addr: " << &stringREF << std::endl;

	std::cout << "StringREL: " << stringREL << std::endl;
	std::cout << "StringPTR: " << *stringPTR << std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;

	return (0);
}
