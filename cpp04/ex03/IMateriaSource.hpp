/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:11:42 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/26 19:15:54 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "AMateria.hpp"

class IMateriaSource{
public :
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria* m) = 0;
    virtual AMateria* createMateria(std::string const& type) = 0;
    virtual AMateria* getMateria(int idx) = 0;
};

#endif