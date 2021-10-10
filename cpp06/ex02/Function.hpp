/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Function.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:43:42 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/10 18:29:09 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_HPP
# define FUNCTION_HPP
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <cstdlib>
# include <ctime>
# include <exception>

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif