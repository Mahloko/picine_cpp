/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:38:47 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 13:35:03 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "ClapTrap Parametric constructor called " << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
    return ;
}

ClapTrap&   ClapTrap::operator=(ClapTrap const & rhs)
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

std::string     ClapTrap::getName(void) const
{
    return _name;
}

void            ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "<" << _name << "> taking " << (amount - _armorDamageReduction)
              << " points of damage !" << std::endl;
    _HP = _HP - (amount - _armorDamageReduction);
    if (_HP < 0)
        _HP = 0;
    return ;
}

void            ClapTrap::beReparired(unsigned int amount)
{
    std::cout << "<" << _name << "> hitpoints are restored with " << amount
              << " amount !" << std::endl;
    _HP += amount;
    if (_HP > _maxHP)
        _HP = _maxHP;
    return ;
}

void            ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "<" << _name << "> did a melee for " << _meleeAttackDamage
              << " points of damage on " << target << std::endl;
    return ;
}

void            ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "<" << _name << "> did a ranged for " << _meleeAttackDamage
              << " points of damage on " << target << std::endl;
    return ;
}