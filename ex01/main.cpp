/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:23:41 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/11 12:55:54 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(int ac, char **av) {
	Data	origin;
	Data	*originCp;
	uintptr_t	ptr;

	if (ac == 2)
		origin.name = av[1];
	else
		origin.name = "Yassine";
	origin.num = 42;
	
	ptr = Serializer::serialize(&origin);
	originCp = Serializer::deserialize(ptr);

	std::cout << &origin << " - - - - - " << &origin <<std::endl;
	std::cout << reinterpret_cast<char *>(ptr) << " - - - - - " << &origin <<std::endl;
	std::cout << *reinterpret_cast<int *>(ptr + sizeof(std::string)) << " - - - - - " << &origin <<std::endl;
	return 0;
}