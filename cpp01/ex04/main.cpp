/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slayer <slayer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 16:08:25 by rucosta           #+#    #+#             */
/*   Updated: 2026/10/02 16:28:12 by slayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if(argc != 4)
		return ((std::cout << "Error: the arguments must be <file> , <s1> , <s2>" << std::endl), 1);

	std::string	filename = argv[1];
	std::string buffer;
	std::size_t	pos = 0;
	std::string s1 = argv[2];
	std::string	s2 = argv[3];

	if(filename.empty() || s1.empty() || s2.empty())
		return((std::cout << "Error: file , s1 , s2 can't be an empty string!" << std::endl), 1);

	std::ifstream inFile(argv[1]);

	if (!inFile.is_open())
		return((std::cout << "Error: could not open input file." << std::endl), 1);

	filename.append(".replace");

	std::ofstream outFile(filename.c_str());

	if (!outFile)
		return ((std::cout << "Error: could not create output file." << std::endl), 1);

	while(std::getline (inFile, buffer, '\0'))
	{
		while ((pos = buffer.find(s1, pos)) != std::string::npos)
		{
			buffer.erase(pos, s1.length());
			buffer.insert(pos, s2);
			pos += s2.length();
		}
		outFile << buffer;
	}

	inFile.close();
	outFile.close();

	return (0);
}
