/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:45 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/31 13:23:44 by kposthum      ########   odam.nl         */
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

#endif
