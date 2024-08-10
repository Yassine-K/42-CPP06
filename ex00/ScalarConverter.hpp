/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:00:05 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/10 17:54:43 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ScalarConverter {
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &);
		ScalarConverter & operator = (const ScalarConverter &);
		~ScalarConverter();
		static void convert(std::string s);	
};