/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 16:28:31 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 16:43:49 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<string>
#include<iostream>

class Brain{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(std::string ideas[100]);
		Brain(const Brain &src);
		virtual ~Brain();
		void operator=(const Brain &src);
		void setIdea(std::string idea, int i);
		std::string getIdea(int i) const;
		// void setIdeas(std::string _ideas[100]);
		// std::string getIdeas()[100] const;
};

#endif
