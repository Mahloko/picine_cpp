/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:36:35 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 18:36:36 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(std::string str): _type(str){
    return ;
}

Weapon::Weapon(void){
    return ;
}

Weapon::~Weapon(void){
    return ;
}

void    Weapon::setType(std::string str){
    this->_type = str;
    return ;
}

std::string     Weapon::getType(void) const{
    return (this->_type);
}