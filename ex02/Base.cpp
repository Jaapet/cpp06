/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:10:07 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/16 14:57:30 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ABC.hpp"

Base::~Base(){}

Base	*generate(void)
{
	srand(time(0));
	int	i = rand();
	if (i % 3 == 0)
		return (new A());
	else if (i % 3 == 1)
		return (new B());
	else if (i % 3 == 2)
		return (new C());
	else
		return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
        std::cout << "Type = A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type = B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type = C" << std::endl;
    else
        std::cout << "Type = Unknown" << std::endl;
}

void	identify(Base &p)
{
	try{
		dynamic_cast<A&>(p);
		std::cout << "Type = A" << std::endl;
		return ;
	}
	catch(std::exception &e){}
	try{
		dynamic_cast<B&>(p);
		std::cout << "Type = B" << std::endl;
		return ;
	}
	catch(std::exception &e){}
	try{
		dynamic_cast<C&>(p);
		std::cout << "Type = C" << std::endl;
		return ;
	}
	catch(std::exception &e){}
	std::cout << "Type = Unknown" << std::endl;
}
