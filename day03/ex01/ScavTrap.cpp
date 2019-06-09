/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 07:16:44 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 18:38:28 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    _HP = 100;
    _maxHP = 100;
    _energy = 50;
    _maxEnergy = 50;
    _level = 1;
    _name = "Clap";
    _meleeAttackDamage = 20;
    _rangedAttackDamage = 15;
    _armorDamageReduction = 3;
    return ;
}

ScavTrap::ScavTrap(std::string name) : _name(name)
{
    _HP = 100;
    _maxHP = 100;
    _energy = 50;
    _maxEnergy = 50;
    _level = 1;
    _meleeAttackDamage = 20;
    _rangedAttackDamage = 15;
    _armorDamageReduction = 3;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    *this = src;
    return ;
}

ScavTrap::~ScavTrap(void)
{
    return ;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const & rhs)
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
void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SL4P-TP " << _name << " attacks " << target
              << " at range, causing " << _HP
              << " points of damage!" << std::endl;
    return ;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SL4P-TP " << _name << " attacks " << target
              << " at close range, causing " << _HP
              << " points of damage !" << std::endl;
    return ;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "SL4P-TP " << _name << " taking in " 
              << (amount - _armorDamageReduction)
              << " points of damage!" << std::endl; 
    _energy = (amount - _armorDamageReduction);
    if (_energy <= 0)
        _energy = 0;
    return ;
}

void    ScavTrap::beReparired(unsigned int amount)
{
    _energy += amount;
    if (_energy > _maxEnergy)
        _energy = _maxEnergy;
    return ;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    int r;
    std::string challenges[5] = {"Jump", "Speed", "Super Ranged",
                                        "Potato", "Super Lazer"};
    r = rand() % 5;
    std::cout << "SL4P-TP " << _name << " attctks " << target
              << " with a  " << challenges[r] << "  Attack!" << std::endl;
    return ;
}

std::string     ScavTrap::getName(void) const
{
    return _name;
}

std::ostream	&operator<<(std::ostream & o, ScavTrap const & i)
{
    o << i.getName();
    return o;
}