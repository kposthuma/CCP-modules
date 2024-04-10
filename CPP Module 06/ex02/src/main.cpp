/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/10 18:56:52 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ScalarConverter.hpp>
#include<A.hpp>
#include<B.hpp>
#include<C.hpp>
#include<time.h>

Base *generate(void){
	srand((unsigned) time(NULL));
	int i = rand();
	if (i % 3 == 0)
		return (new A);
	else if (i % 3 == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base *p){}

void identify(Base &p){}

int	main (void){
	Base *base = generate();
	return 0;
}
