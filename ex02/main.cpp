/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:51:30 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/16 14:52:08 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABC.hpp"
#include "Base.hpp"

int main(void)
{
    Base *p = generate();
    identify(p);
    identify(*p);
    return (0);
}