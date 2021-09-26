/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:22:24 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/26 19:07:13 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
private :
    AMateria    *_Materia[4];
public :
    MateriaSource();
    virtual ~MateriaSource();
    MateriaSource(const MateriaSource& copy);
    MateriaSource&  operator=(const MateriaSource& materiasource);
    virtual void learnMateria(AMateria* m);
    virtual AMateria* createMateria(std::string const& type);
    virtual AMateria* getMateria(int idx);
};

#endif
