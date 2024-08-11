/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:54:25 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/11 12:06:32 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &) {
	
}

ScalarConverter & ScalarConverter::operator = (const ScalarConverter &) {
	return *this;
}

ScalarConverter::~ScalarConverter() {
	
}

void myStr(char res, std::string s) {
	std::cout << "char: ";
	if (s == "nan")
		std:: cout << "impossible" << std::endl;
	else if (res < 32 || res > 126)
		std:: cout << "Non displayable" << std::endl;
	else
		std:: cout << "'" << res << "'" << std::endl;
}

void myInt(double res, std::string s) {
	std::cout << "int: ";
	if (s == "nanf" || s == "nan" || res > INT_MAX || res < INT_MIN)
		std:: cout << "impossible" << std::endl;
	else
		std:: cout << static_cast<int>(res) << std::endl;
}

void ScalarConverter::convert(std::string s) {
	char	*endp;
	double	res;

	if (s.length() == 1 && (s[0] < 48 || s[0] > 57))
		res = static_cast<int>(s[0]);
	else {
		res = strtod(s.c_str(), &endp);
		if (endp[0] != 0 && (endp[1] || endp[0] != 'f' || (endp[0] == 'f' && (s.find('.') == s.npos && static_cast<int>(res) == static_cast<float>(res)))))
			throw (std::invalid_argument("Invalid input!"));
	}
	myStr(res, s);
	myInt(res, s);
	std::cout << "float: " << static_cast<float>(res) << (static_cast<int>(res) == static_cast<float>(res) ? ".0f" : "f") << std::endl;
	std::cout << "double: " << res << (static_cast<int>(res) == static_cast<double>(res) ? ".0" : "") << std::endl;
}