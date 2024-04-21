/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/28 18:06:38 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/01 13:12:30 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include<string>

class Data
{
	private:
		std::string	_content;
	public:
		Data();
		Data(std::string const &src);
		Data(Data const &src);
		~Data();
		Data	operator=(Data const &src);

		std::string getContent();
		void setContent(std::string const &src);
};

#endif
