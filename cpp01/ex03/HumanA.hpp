/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:17:52 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:17:53 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA{
    private:
    std::string _name;
    Weapon& _club;

    public:
    HumanA();
    HumanA(Weapon& club);
    HumanA(const std::string name, Weapon& club);
    ~HumanA();
    void    attack();
};

#endif
