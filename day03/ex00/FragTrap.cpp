/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 20:10:38 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 18:13:30 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    _HP = 100;
    _maxHP = 100;
    _energy = 100;
    _maxEnergy = 100;
    _level = 1;
    _name = "Frag";
    _meleeAttackDamage = 30;
    _rangedAttackDamage = 20;
    _armorDamageReduction = 5;
    std::cout << "FragTrap Default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name)
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
    std::cout << name << " to joined !"<< std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << _name << " got destructed !"<< std::endl;
    return ;
}

FragTrap&   FragTrap::operator=(FragTrap const & rhs)
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

void        FragTrap::repairEnergy()
{
    _energy = _maxEnergy;
    return ;
}


void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int r;
    std::string semiRandomAttack[5] = {"Surprise", "Jump", "Boom",
                                        "Badge", "Hocker"};
    r = rand() % 5;
    if (_energy < 25)
    {
        std::cout << "out of energy!" << std::endl;
        return ;
    }
    _energy -= 25;
    if (_energy <= 0)
        _energy = 0; 
    std::cout << "FR4G-TP " << _name << " attctks " << target
              << " with a  " << semiRandomAttack[r] << "  Attack!" << std::endl;
    if (_energy < 25)
        repairEnergy();
    return ;
    std::cout << "FR4G-TP " << _name << " attctks " << target
              << " with a  " << semiRandomAttack[r] << "  Attack!" << std::endl;
    return ;
}

std::string     FragTrap::getName(void) const
{
    return _name;
}

void            FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "<" << _name << "> taking " << (amount - _armorDamageReduction)
              << " points of damage !" << std::endl;
    _HP = _HP - (amount - _armorDamageReduction);
    if (_HP < 0)
        _HP = 0;
    return ;
}

void            FragTrap::beReparired(unsigned int amount)
{
    std::cout << "<" << _name << "> hitpoints are restored with " << amount
              << " amount !" << std::endl;
    _HP += amount;
    if (_HP > _maxHP)
        _HP = _maxHP;
    return ;
}

void            FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "<" << _name << "> did a melee for " << _meleeAttackDamage
              << " points of damage on " << target << std::endl;
    return ;
}

void            FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "<" << _name << "> did a ranged for " << _meleeAttackDamage
              << " points of damage on " << target << std::endl;
    return ;
}