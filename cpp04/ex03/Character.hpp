/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:41:52 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/26 21:42:06 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter{
private:
    std::string _Name;
    AMateria    *_Materia[4];
public:
    Character();
    virtual ~Character();
    Character(const std::string name);
    Character(const Character& copy);
    Character&  operator=(const Character& character);
    virtual std::string const& getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
    virtual AMateria* getMateria(int idx);
};

#endif