/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:18:15 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:18:16 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon{
    private:
    std::string _type;
    public:
    Weapon();
    Weapon(const std::string type);
    ~Weapon();
    const std::string&  getType();
    void  setType(const std::string type);

};

#endif
