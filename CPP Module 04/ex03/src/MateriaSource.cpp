/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 18:41:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 18:59:19 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<MateriaSource.hpp>
#include<IMateriaSource.hpp>
#include<AMateria.hpp>

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		_learned[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src){
	operator=(src);
}

MateriaSource::~MateriaSource(){
}

void MateriaSource::operator=(const MateriaSource &src){
	//do a thing, make a getter, use the clone
}

void MateriaSource::learnMateria(AMateria* m){
	int i = 0;
	while (i < 4 && _learned[i] != NULL)
		i++;
	if (i < 4)
		_learned[i] = m->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (_learned[i]->getType() == type)
			return _learned[i]->clone();
	}
	return NULL;
}