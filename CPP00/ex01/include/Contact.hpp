/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:47 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/31 13:27:46 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>
#include<string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;
	public:
		void set_first_name(std::string a);
		std::string get_first_name();
		void set_last_name(std::string a);
		std::string get_last_name();
		void set_nickname(std::string a);
		std::string get_nickname();
		void set_phone_number(std::string a);
		std::string get_phone_number();
		void set_secret(std::string a);
		std::string get_secret();
		Contact();
		~Contact();
};

#endif
