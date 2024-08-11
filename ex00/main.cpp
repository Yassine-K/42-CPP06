/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:32:02 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/11 11:22:43 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <exception>
#include <stdexcept>

int main(int ac, char **av) {
	try {
		if (ac != 2)
			throw (std::invalid_argument("Invalid number of arguments!"));
		ScalarConverter::convert(av[1]);
	}
	catch(std::exception & e) {
		std:: cout << e.what() << std::endl;
	}
	return 0;
}