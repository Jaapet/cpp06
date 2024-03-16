/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:40:41 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/16 14:01:17 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(Serializer const &instance)
{
    *this = instance;
}
Serializer::~Serializer(){}

Serializer	&Serializer::operator=(Serializer const &instance)
{
    (void)instance;
    return (*this);
}

uintptr_t   Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data    *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
