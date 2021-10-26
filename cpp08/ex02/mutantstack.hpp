/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:54:19 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/25 20:32:27 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
public :
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack& copy);
    MutantStack& operator=(const MutantStack& mutantStack);
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();

    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    const_iterator begin() const;
    const_iterator end() const;
};

#endif