/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:54:25 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/10 18:37:10 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <climits>

int occurence(std::string s, char c) {
	int res = 0;
	for(int i = 0; i < s.length(); i++)
		if (s[i] == c)
			res++;
	return res;
}

ScalarConverter::ScalarConverter() {
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &) {
	
}

ScalarConverter & ScalarConverter::operator = (const ScalarConverter &) {
	return *this;
}

ScalarConverter::~ScalarConverter() {
	
}

void ScalarConverter::convert(std::string s) {
	std::cout << "char: " << s << std::endl;
	std::cout << "int: " << std::stoi(s) << std::endl;
	std::cout << "float: " << std::stof(s) << std::endl;
	std::cout << "double: " << std::stod(s) << std::endl;
}
	