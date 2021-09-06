/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:06:13 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/06 12:06:14 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>
# include <string>

class Karen{
    private :
    std::string _level[4];
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    void    (Karen::*_funcPtrArr[4])(void);

    public :
    Karen();
    ~Karen();
    void    complain(std::string level);
    void    filter(std::string level);
    int check(std::string level);
};

#endif
