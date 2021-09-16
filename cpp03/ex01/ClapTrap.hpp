/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:50:51 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 18:52:55 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap{
protected:
    std::string     _Name;
    unsigned int    _HitPoints;
    unsigned int    _EnergyPoints;
    unsigned int    _AttackDamage;
    ClapTrap();
public:
    ClapTrap(const std::string name);
    ClapTrap(const ClapTrap& copy);
    ~ClapTrap();
    ClapTrap&   operator=(const ClapTrap& trap);
    void    attack(std::string const& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    std::string getName() const;
    unsigned int    getHitPoints() const;
    unsigned int    getEnergyPoints() const;
    unsigned int    getAttackDamage() const;
    void    setAttackDamage(unsigned int amount);
};

#endif
