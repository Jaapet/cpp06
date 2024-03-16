/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:41:15 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/16 13:51:57 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stdint.h>

struct Data
{
    std::string s1;
    int         n;
    std::string s2;
};

class Serializer
{
private:
    Serializer();
    Serializer(Serializer const &instance);
    ~Serializer();
public:
    Serializer	&operator=(Serializer const &instance);

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};
