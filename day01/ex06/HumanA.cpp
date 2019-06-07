/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:36:22 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 18:36:23 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon& arm): _name(name), _weapon(arm){
    return ;
}

HumanA::~HumanA(void){
    return ;
}

void    HumanA::attack(void) const{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
    return ;
}