/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:50:53 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/26 16:51:57 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;
class AMateria{
protected :
    std::string _Type;
public :
    AMateria();
    virtual ~AMateria();
    AMateria(const AMateria& copy);
    AMateria(std::string const& type);
    AMateria&   operator=(const AMateria& amateria);
    std::string const& getType() const;
    virtual AMateria* clone() = 0;
    virtual void use(ICharacter& target);
};

#endif