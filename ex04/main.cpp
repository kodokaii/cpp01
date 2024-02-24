/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/24 12:24:02 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <cerrno>

static void	_replace(std::string &text, const std::string &s1, const std::string &s2)
{
	size_t	s1Length(s1.length());
	size_t	s2Length(s2.length());
	size_t	findPos(text.find(s1));

	while (!s1.empty() && findPos != std::string::npos)
	{
		text.erase(findPos, s1Length);
		text.insert(findPos, s2);
		findPos += s2Length;
		findPos = text.find(s1, findPos);
	}
}

int main (int argc, char *argv[])
{
	std::ifstream		fileIn;
	std::ofstream		fileOut;
	std::string			fileName;
	std::string			text;

	if (argc != 4)
	{
		if (argc < 4)
			std::cerr << "Usage: " << argv[0] << " file s1 s2" << std::endl;
		else
			std::cerr << argv[0] << ": too many arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	fileName = argv[1];
	fileIn.open(fileName.c_str());
	if (!fileIn.is_open())
	{
		std::cerr << argv[0] << ": " << fileName << ": "
			<< std::strerror(errno) << std::endl;
		return (EXIT_FAILURE);
	}
	getline(fileIn, text, '\0');
	fileIn.close();
	_replace(text, argv[2], argv[3]);
	fileOut.open((fileName + ".replace").c_str(), std::ios::trunc);
	if (!fileOut.is_open())
	{
		std::cerr << argv[0] << ": " << fileName << ".replace"
			<< ": " << std::strerror(errno) << std::endl;
		return (EXIT_FAILURE);
	}
	fileOut << text;
	fileOut.close();
	return 0;
}
