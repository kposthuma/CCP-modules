/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:45 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/25 18:54:55 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include<Contact.hpp>
#include<iostream>
#include<string>

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		void 	setcontact(Contact contact, int i);
		Contact getcontact(int i);
		PhoneBook();
		~PhoneBook();
};

PhoneBook::PhoneBook()
{
	std::cout << "Creating a new Phonebook\n";

}

PhoneBook::~PhoneBook()
{	
	std::cout << "Deleting Phonebook\n";
}

#endif
