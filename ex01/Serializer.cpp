/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:15:50 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/11 12:47:14 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <sys/_types/_uintptr_t.h>

Serializer::Serializer() {
	
}

Serializer::Serializer(const Serializer &) {
	
}

Serializer & Serializer::operator = (const Serializer &) {
	return *this;
}

Serializer::~Serializer() {
	
}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
