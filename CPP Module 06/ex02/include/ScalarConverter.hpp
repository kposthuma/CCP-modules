/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/03/28 17:54:23 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include<string>

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
	public:
		static void convert(std::string str);
};

#endif
