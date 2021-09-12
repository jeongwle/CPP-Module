/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:18:37 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/12 19:50:36 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap{
private:
    std::string     _Name;
    unsigned int    _HitPoints;
    unsigned int    _EnergyPoints;
    unsigned int    _AttackDamage;
public:
    ClapTrap();
    ClapTrap(const std::string name);
    ClapTrap(const ClapTrap& copy);
    ~ClapTrap();
    ClapTrap&   operator=(const ClapTrap& trap);
    void    attack(std::string const& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    std::string getName() const;
    unsigned int    getHitPoints() const;
    unsigned int    getAttackDamage() const;
    void    setAttackDamage(unsigned int amount);
    void    setName(std::string name);
};

#endif