/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 18:41:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/23 12:26:01 by kposthum      ########   odam.nl         */
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
	for (int i = 0; i < 4; i++)
		delete _learned[i];
}

void MateriaSource::operator=(const MateriaSource &src){
	for (int i = 0; i < 4; i++){
		if (src.getLearned(i) != NULL)
			_learned[i] = (src.getLearned(i))->clone();
		else
			_learned[i] = NULL;
	}
}

AMateria* MateriaSource::getLearned(int idx) const{
	if (idx < 0 || idx > 3)
		return NULL;
	return _learned[idx];
}

void MateriaSource::learnMateria(AMateria* m){
	int i = 0;
	while (i < 4 && _learned[i] != NULL)
		i++;
	if (i < 4)
		_learned[i] = m->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4 && _learned[i] != NULL; i++){
		if (_learned[i]->getType() == type)
			return _learned[i]->clone();
	}
	return NULL;
}