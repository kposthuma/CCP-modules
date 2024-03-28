/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/28 18:06:38 by kposthum      #+#    #+#                 */
/*   Updated: 2024/03/28 18:08:29 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include<string>

class Data
{
	private:
		std::string	content;
	public:
		Data();
		Data(Data const &src);
		~Data();
		Data	operator=(Data const &src);
};

#endif
