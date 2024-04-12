/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/12 17:00:10 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Base.hpp>
#include<A.hpp>
#include<B.hpp>
#include<C.hpp>
#include<time.h>
#include<iostream>

Base *generate(void){
	int i = rand();
	if (i % 3 == 0)
		return (std::cout << "return A" << std::endl, new A);
	else if (i % 3 == 1)
		return (std::cout << "return B" << std::endl, new B);
	else
		return (std::cout << "return C" << std::endl, new C);
}

void identify(Base *p){
	// std::cout << "identify by pointer" << std::endl;
	try{
		A* a = dynamic_cast<A*>(p);
		if (a == nullptr)
			throw std::exception();
		std::cout << "It's an A" << std::endl;
	}
	catch(std::exception const &e){
		try{
			B* b = dynamic_cast<B*>(p);
			if (b == nullptr)
				throw std::exception();
			std::cout << "It's a B" << std::endl;
		}
		catch(std::exception const &e){
			try{
				C* c = dynamic_cast<C*>(p);
				if (c == nullptr)
					throw std::exception();
				std::cout << "It's a C" << std::endl;
			}
			catch(std::exception const &e){
				std::cout << e.what() << std::endl;
			}
		}
	}
}

void identify(Base &p){
	// std::cout << "identify by reference" << std::endl;
	try{
		A a = dynamic_cast<A&>(p);
		std::cout << "It's an A" << std::endl;
	}
	catch(std::exception const &e){
		try{
			B b = dynamic_cast<B&>(p);
			std::cout << "It's a B" << std::endl;
		}
		catch(std::exception const &e){
			try{
				C c = dynamic_cast<C&>(p);
				std::cout << "It's a C" << std::endl;
			}
			catch(std::exception const &e){
				std::cout << e.what() << std::endl;
			}
		}
	}

}

int	main (void){
	srand((unsigned) time(NULL));
	Base *base1 = generate();
	Base *base2 = generate();
	Base *base3 = generate();
	Base *base4 = generate();
	Base *base5 = generate();
	identify(*base1);
	identify(*base2);
	identify(*base3);
	identify(*base4);
	identify(*base5);
	return 0;
}
