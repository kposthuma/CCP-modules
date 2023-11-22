/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   materiaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 14:58:52 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include<string>
#include<iomanip>
#include<iostream>
#include<AMateria.hpp>
#include<IMateriaSource.hpp>

class MateriaSource : public IMateriaSource{
	private:
		AMateria *_learned[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		~MateriaSource();
		void operator=(const MateriaSource &src);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
