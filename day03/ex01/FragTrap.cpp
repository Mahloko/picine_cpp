/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 20:10:38 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 10:10:49 by mmahloko         ###   ########.fr       */
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
    return ;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
    _HP = 100;
    _maxHP = 100;
    _energy = 100;
    _maxEnergy = 100;
    _level = 1;
    _meleeAttackDamage = 30;
    _rangedAttackDamage = 20;
    _armorDamageReduction = 5;
    return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
    *this = src;
    return ;
}

FragTrap::~FragTrap() { return ; }

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

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << _name << " attacks " << target
              << " at range, causing " << _HP
              << " points of damage!" << std::endl;
    return ;
}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << _name << " attacks " << target
              << " at close range, causing " << _HP 
              << " points of damage !" << std::endl;
    return ;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FR4G-TP " << _name << " taking in " 
              << (amount - _armorDamageReduction)
              << " points of damage!" << std::endl; 
    _energy = (amount - _armorDamageReduction);
    if (_energy <= 0)
        _energy = 0;
    return ;
}

void    FragTrap::beReparired(unsigned int amount)
{
    _energy += amount;
    if (_energy > _maxEnergy)
        _energy = _maxEnergy;
    return ;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int r;
    std::string semiRandomAttack[5] = {"Jump", "Speed", "Super Ranged",
                                        "Potato", "Super Lazer"};
    r = rand() % 5;
    std::cout << "FR4G-TP " << _name << " attctks " << target
              << " with a  " << semiRandomAttack[r] << "  Attack!" << std::endl;
    return ;
}

std::string     FragTrap::getName(void) const
{
    return _name;
}

std::ostream	&operator<<(std::ostream & o, FragTrap const & i)
{
    o << i.getName();
    return o;
}