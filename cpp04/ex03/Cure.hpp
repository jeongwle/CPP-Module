/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:15:13 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/26 16:52:15 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria{
public :
    Cure();
    virtual ~Cure();
    Cure(const Cure& copy);
    Cure(const std::string& type);
    Cure&    operator=(const Cure& cure);
    virtual AMateria* clone();
    virtual void use(ICharacter& target);
};

#endif