/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:36:28 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 18:36:30 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
  public:
    HumanB(std::string);
    ~HumanB(void);
    void      setWeapon(Weapon&);
    void        attack(void) const;

  private:
    std::string _name;
    Weapon* _weapon;
};

#endif