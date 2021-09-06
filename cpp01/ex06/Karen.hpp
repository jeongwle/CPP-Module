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
