/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:36:25 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 18:36:26 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : _name(name){
    return;
}

HumanB::~HumanB(void){
    return;
}

void HumanB::setWeapon(Weapon &arm){
    this->_weapon = &arm;
}

void HumanB::attack(void) const{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
    return;
}