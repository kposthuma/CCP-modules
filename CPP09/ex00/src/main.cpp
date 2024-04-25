/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 15:19:43 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/25 18:31:13 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include<BitcoinExchange.hpp>
#include<ctime>
#include<chrono>
#include<iostream>
#include<string>
#include<fstream>
#include<map>
#include<iomanip>

long parseDate(std::string date){
	std::string year = date.substr(0, 4);
	std::string month = date.substr(5, 2);
	std::string day = date.substr(8, 2);
	std::string newDate = year + month + day;
	int iDay = std::stoi(day);
	int iMonth = std::stoi(month);
	int iYear = std::stoi(year);
	if (iMonth > 12 || iDay > 31 || iYear < 2009)
		return -1;
	if (iDay > 30 && (iMonth == 4 || iMonth == 6 || iMonth == 9 || iMonth == 11))
		return -1;
	if (iDay > 29 && iMonth == 2)
		return -1;
	long lDate = std::stol(newDate);
	if (lDate < 20090102)
		return -1;
	return lDate;
}

int main(int argc, char **argv){
	if (argc < 2){
		std::cerr << "Error: no input file" << std::endl;
		return 1;
	}
	std::string buff;
	std::string date;
	std::string rate;

	std::ifstream database("data/data.csv", std::ios::in);
	std::map<long, float> datamap;
	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	std::cout.precision(2);
	if (!database.is_open())
		return 1;
	std::getline(database, buff);
	if (buff != "date,exchange_rate")
		return 1;
	while (!database.eof()){
		std::getline(database, buff);
		if (buff.find(',') == std::string::npos)
			break ;
		date = buff.substr(0, buff.find(','));
		rate = buff.substr(date.length() + 1, buff.length());
		datamap[parseDate(date)] = std::stof(rate);
	}
	buff.clear(), date.clear(), rate.clear();
	database.close();
	
	std::ifstream input(argv[1], std::ios::in);
	if (!input.is_open())
		return 1;
	size_t i = 0;
	while (!input.eof()){
		std::getline(input, buff);
		if (buff == "")
			continue ;
		if (buff == "date | value" && i == 0){
			i++;
			continue ;
		}
		if (buff.find(" | ") == std::string::npos || buff.find_first_not_of("1234567890| -.") != std::string::npos){
			std::cerr << "\tErorr: incorrect format" << std::endl;
			i++;
			continue ;
		}
		std::string date = buff.substr(0, buff.find(" | "));
		long test = parseDate(date.c_str());
		if (test < 0){
			std::cerr << "\tError: incorrect date" << std::endl;
			i++;
			continue ;
		}
		std::string rate = buff.substr(date.length() + 3, buff.length());
		float val = -1;
		try{	val = std::stof(rate);	}	catch(std::exception const &e){	e.what();	}
		if (val < 0 || val > 1000){
			std::cerr << "\tError: improper value" << std::endl;
			i++;
			continue ;
		}
		std::map<long, float>::iterator it = datamap.upper_bound(test);
		it--;
		std::cout << date << "\t" << val << "\ttotal worth:\t" << it->second * val << "\t@" << it->first << std::endl;
		i++;
	}
	buff.clear(), date.clear(), rate.clear();
	input.close();
	return 0;
}