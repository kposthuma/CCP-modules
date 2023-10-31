/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/25 18:53:38 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Contact.hpp>
#include<PhoneBook.hpp>
#include<iostream>
#include<iomanip>
#include<string>

void PhoneBook::setcontact(Contact contact, int i)
{
	contacts[i] = contact;
}

Contact PhoneBook::getcontact(int i)
{
	return contacts[i];
}

void display_book(PhoneBook phonebook)
{
	std::string tmp;

	for (int i = 0; i < 45; i++)
		std::cout << "_";
	std::cout	<< std::endl << "|"
				<< std::setw(10) << "index" << "|" 
				<< std::setw(10) << "first name" << "|" 
				<< std::setw(10) << "last name" << "|" 
				<< std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < 45; i++)
		std::cout << "_";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		Contact cont = phonebook.getcontact(i);
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		tmp = cont.get_first_name();
		if (tmp.length() > 10)
		{
			tmp.resize(9);
			std::cout << tmp << ".|";
		}
		else
			std::cout << std::setw(10) << tmp << "|";
		tmp = cont.get_last_name();
		if (tmp.length() > 10)
		{
			tmp.resize(9);
			std::cout << tmp << ".|";
		}
		else
			std::cout << std::setw(10) << tmp << "|";
		tmp = cont.get_nickname();
		if (tmp.length() > 10)
		{
			tmp.resize(9);
			std::cout << tmp << ".|";
		}
		else
			std::cout << std::setw(10) << tmp << "|";
		std::cout << std::endl;
	}
}

void display_contact(PhoneBook phonebook, int i)
{
	Contact cont = phonebook.getcontact(i);
	if (cont.get_first_name() == ""){
		std::cout << "no contact has been added to this index yet, returning to main menu" << std::endl;
	}
	else{
	std::cout << "First name: " << cont.get_first_name() << std::endl
		<< "Last name :" << cont.get_last_name() << std::endl
		<< "Nickname :" << cont.get_nickname() << std::endl
		<< "Phone number :" << cont.get_phone_number() << std::endl
		<< "Darkest secret :" << cont.get_secret() << std::endl;
	}
}

void search(PhoneBook phonebook)
{
	std::string index;
	int i;

	i = -1;
	display_book(phonebook);
	std::cout << "Please select index of contact to display" << std::endl;
	std::getline(std::cin, index);
	if (index == "1")
		i = 0;
	else if (index == "2")
		i = 1;
	else if (index == "3")
		i = 2;
	else if (index == "4")
		i = 3;
	else if (index == "5")
		i = 4;
	else if (index == "6")
		i = 5;
	else if (index == "7")
		i = 6;
	else if (index == "8")
		i = 7;
	else
		std::cout << "Incorrect input, returning to main menu" << std::endl;
	if (i != -1)
		display_contact(phonebook, i);
}

PhoneBook add(PhoneBook phonebook)
{
	std::string temp;
	Contact cont;
	static int i;

	std::cout << "Provide first name new contact:" << std::endl;
	std::getline(std::cin, temp);
	cont.set_first_name(temp);
	std::cout << "Provide " << cont.get_first_name() << "\'s last name :" << std::endl;
	std::getline(std::cin, temp);
	cont.set_last_name(temp);
	std::cout << "Provide " << cont.get_first_name() << "\'s nickname:" << std::endl;
	std::getline(std::cin, temp);
	cont.set_nickname(temp);
	std::cout << "Provide " << cont.get_first_name() << "\'s phone number:" << std::endl;
	std::getline(std::cin, temp);
	cont.set_phone_number(temp);
	std::cout << "Provide " << cont.get_first_name() << "\'s darkest secret:" << std::endl;
	std::getline(std::cin, temp);
	cont.set_secret(temp);
	phonebook.setcontact(cont, i);
	i++;
	if (i > 7)
		i = 0;
	return (phonebook);
}

int main(void)
{
	PhoneBook phonebook;
	std::string option;

	std::cout << "Please select \'ADD\', \'SEARCH\' or \'EXIT\'" << std::endl;
	while (std::getline(std::cin, option))
	{
		if (option == "EXIT")
			break ;
		else if (option == "ADD")
			phonebook = add(phonebook);
		else if (option == "SEARCH")
			search(phonebook);
		std::cout << "PLEASE SELECT \'ADD\', \'SEARCH\' OR \'EXIT\'" << std::endl;
	}
	return (0);
}
