/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 20:08:42 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 18:00:29 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class FragTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);
        
        FragTrap&   operator=(FragTrap const & rhs);
        
        void        takeDamage(unsigned int amount);
        void        beReparired(unsigned int amount);
        void        meleeAttack(std::string const & target);
        void        rangedAttack(std::string const & target);
        void        vaulthunter_dot_exe(std::string const & target);
        std::string getName(void) const;
        void        repairEnergy();

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

std::ostream	&operator<<(std::ostream & o, FragTrap const & i);

#endif