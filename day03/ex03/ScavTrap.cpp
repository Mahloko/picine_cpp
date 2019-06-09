/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 07:16:44 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 13:47:34 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
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
    std::cout << "ClapTrap Default constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _HP = 100;
    _maxHP = 100;
    _energy = 50;
    _maxEnergy = 50;
    _level = 1;
    _name = name;
    _meleeAttackDamage = 20;
    _rangedAttackDamage = 15;
    _armorDamageReduction = 3;
    std::cout << name << " hoped in !"<< std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
    return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << _name << " lost !"<< std::endl;
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

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    int r;
    std::string challenges[5] = {"", "", "",
                                        "", ""};
    r = rand() % 5;
    std::cout << "SL4P-TP " << _name << " challenges " << target
              << " with a  " << challenges[r] << "  Attack!" << std::endl;
    return ;
}