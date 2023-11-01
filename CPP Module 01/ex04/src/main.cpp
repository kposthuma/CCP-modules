/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 10:03:38 by koen          #+#    #+#                 */
/*   Updated: 2023/11/01 15:07:02 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

std::string replacement(std::string src, char *s1, char *s2)
{
	std::string str1(s1);
	std::string str2(s2);
	size_t start;

	start = src.find(str1);
	src.erase(start, str1.length());
	src.insert(start, str2);
	while (src.find(str1, start + str2.length()) != std::string::npos)
	{
		start = src.find(str1, start + str2.length());
		src.erase(start, str1.length());
		src.insert(start, str2);
	}
	return src;
}

int main (int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "incorrect number of arguments, required: 4" << std::endl;
		return 1; }

	std::string buff;
	std::string replace(argv[1]);
	replace+=".replace";
	std::ifstream infile(argv[1], std::ios::in);
	std::ofstream outfile(replace.c_str(), std::ios::out);

	if (!infile.is_open() || !outfile.is_open()) {
		std::cout << "could not open files, abort" << std::endl;
		return 2; }
	
	while (!infile.eof()) {
		std::getline(infile, buff);
		if (buff.find(argv[2]) != std::string::npos)
			buff = replacement(buff, argv[2], argv[3]);
		outfile << buff;
		if (!infile.eof())
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}
