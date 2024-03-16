/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:42:50 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/16 14:02:56 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data *data = new Data;
    data->s1 = "Hello";
    data->n = 42;
    data->s2 = "World";

	std::cout << "ptr : " << data << std::endl;
	std::cout << "s1: " << data->s1 << std::endl;
    std::cout << "n: " << data->n << std::endl;
    std::cout << "s2: " << data->s2 << std::endl;
	std::cout << "---------------------------" << std::endl;
    uintptr_t raw = Serializer::serialize(data);
    std::cout << "raw: " << raw << std::endl;
	std::cout << "---------------------------" << std::endl;
    Data *deserialized = Serializer::deserialize(raw);
	std::cout << "ptr : " << data << std::endl;
    std::cout << "s1: " << deserialized->s1 << std::endl;
    std::cout << "n: " << deserialized->n << std::endl;
    std::cout << "s2: " << deserialized->s2 << std::endl;    

    delete data;
    return (0);
} 