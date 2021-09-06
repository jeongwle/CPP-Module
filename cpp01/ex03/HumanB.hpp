/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:17:57 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:17:58 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB{
    private :
    std::string _name;
    Weapon *_club;
    
    public :
    HumanB();
    HumanB(const std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon& club);
};

#endif
