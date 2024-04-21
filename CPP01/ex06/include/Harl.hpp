/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 16:20:45 by koen          #+#    #+#                 */
/*   Updated: 2023/11/01 16:27:44 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include<iostream>
#include<string>

class Harl
{
	private:
		void	Debug(void);
		void	Info(void);
		void	Warning(void);
		void	Error(void);
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif