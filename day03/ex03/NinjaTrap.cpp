/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:49:51 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 16:50:00 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
    _HP = 60;
    _maxHP = 60;
    _energy = 120;
    _maxEnergy = 120;
    _level = 1;
    _name = "Default Ninja";
    _meleeAttackDamage = 60;
    _rangedAttackDamage = 5;
    _armorDamageReduction = 0;
    std::cout << _name <<" joined!" << std::endl;
    return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    _HP = 100;
    _maxHP = 100;
    _energy = 100;
    _maxEnergy = 100;
    _level = 1;
    _name = name;
    _meleeAttackDamage = 30;
    _rangedAttackDamage = 20;
    _armorDamageReduction = 5;
    std::cout << name << " joined !"<< std::endl;
    return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src)
{
    std::cout << src._name << " has duplicated !" << std::endl;
    *this = src;
    return ;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << _name << " got extinguished !"<< std::endl;
    return ;
}

NinjaTrap&   NinjaTrap::operator=(NinjaTrap const & rhs)
{
    if (this != &rhs)
    {
        _HP = rhs._HP;
        _maxHP = rhs._maxHP;
        _energy = rhs._maxHP;
        _maxEnergy = rhs._maxEnergy;
        _level = rhs._level;
        _meleeAttackDamage = rhs._meleeAttackDamage;
        _rangedAttackDamage = rhs._rangedAttackDamage;
        _armorDamageReduction = rhs._armorDamageReduction;
        _name = rhs._name;
    }
    return *this;
}

void         NinjaTrap::ninjaShoebox(FragTrap const & src)
{
    std::cout << _name << "traps  " << src.getName() << std::endl;
    return ;
}

void         NinjaTrap::ninjaShoebox(ClapTrap const & src)
{
    std::cout << _name << " extinguishs ! " << src.getName() << std::endl;
    return ;
}

void         NinjaTrap::ninjaShoebox(NinjaTrap const & src)
{
    std::cout << _name << " would never attack" << src.getName() << std::endl;
    return ;
}

void         NinjaTrap::ninjaShoebox(ScavTrap const & src)
{
    std::cout << _name << " traps " << src.getName() << " is a shoe!"<< std::endl;
    return ;
}