/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 07:17:06 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 18:38:33 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "FragTrap.hpp"

class   ScavTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap();

        ScavTrap&   operator=(ScavTrap const & rhs);
        
        void        takeDamage(unsigned int amount);
        void        beReparired(unsigned int amount);
        void        meleeAttack(std::string const & target);
        void        rangedAttack(std::string const & target);
        void        challengeNewcomer(std::string const & target);
        std::string getName(void) const;
    protected:
        unsigned int        _HP;
        unsigned int        _energy;
        unsigned int        _maxHP;
        unsigned int        _maxEnergy;
        unsigned int        _level;
        std::string         _name;
        unsigned int        _meleeAttackDamage;
        unsigned int        _rangedAttackDamage;
        unsigned int        _armorDamageReduction;
};

std::ostream	&operator<<(std::ostream & o, ScavTrap const & i);

#endif