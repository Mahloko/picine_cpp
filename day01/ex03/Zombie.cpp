/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:15:29 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 16:04:22 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { return ; }

Zombie::~Zombie() { return ; }

void    	Zombie::announce()
{
    std::cout << this->_name << " (6_^) " << this->_type 
              << " I want Braiiiiinnnnssszzz!!" << std::endl;
    return ;
}

void		Zombie::setName(std::string name)
{
	this->_name = name;
    return ;
}

void		Zombie::setType(std::string type)
{
	this->_type = type;
    return ;
}