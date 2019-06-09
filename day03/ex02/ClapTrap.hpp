/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:39:13 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 11:07:21 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ClapTrap
{
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
        
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap(void);
        
        ClapTrap&   operator=(ClapTrap const & rhs);
        
        std::string getName(void) const;
        void        takeDamage(unsigned int amount);
        void        beReparired(unsigned int amount);
        void        meleeAttack(std::string const & target);
        void        rangedAttack(std::string const & target);
};

std::ostream	&operator<<(std::ostream & o, ClapTrap const & i);

#endif