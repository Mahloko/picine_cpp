/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 20:10:38 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 16:52:18 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
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

FragTrap::FragTrap(std::string name) : ClapTrap(name)
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

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
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

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int r;
    std::string semiRandomAttack[5] = {"", "", "",
                                        "", ""};
    r = rand() % 5;
    std::cout << "FR4G-TP " << _name << " attctks " << target
              << " with a  " << semiRandomAttack[r] << "  Attack!" << std::endl;
    return ;
}