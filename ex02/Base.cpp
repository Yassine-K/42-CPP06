/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:05:02 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/11 14:51:14 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>

Base::~Base() {
}

Base * Base::generate(void) {
	static int rand = 0;

	if (rand % 3)
		return new A;
	else if (!(rand % 2))
		return new B;
	else
		return new C;
	rand++;
}

void Base::identify(Base* p) {
	if (dynamic_cast<A *>(p))
		std::cout << "It's an A class instence!";
	else if (dynamic_cast<B *>(p))
		std::cout << "It's an B class instence!";
	else
		std::cout << "It's an C class instence!";
}

void Base::identify(Base& p) {
	try {
		A &tmp = dynamic_cast<A &>(p);
		(void) tmp;
		std::cout << "It's an A class instence!";
	}
	catch (std::exception & e){
		try {
			B &tmp = dynamic_cast<B &>(p);
			(void) tmp;
			std::cout << "It's an B class instence!";
		}
		catch (std::exception & e) {
			std::cout << "It's an C class instence!";
		}
	}
}
