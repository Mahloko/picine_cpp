/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:36:19 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 18:36:20 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA{
    public:
        HumanA(std::string, Weapon&);
        ~HumanA(void);
        void            attack(void) const;
        std::string     getName(void);

    private:
        std::string _name;
        Weapon& _weapon;
};

#endif