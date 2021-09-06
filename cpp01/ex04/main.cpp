# include "Replace.hpp"

int main(int argc, char *argv[]){
    int res = 0;

    if (argc == 4)
    {
        if (!argv[2] || !argv[3])
        {
            std::cout << "string error" << std::endl;
            return (-1);
        }
        Replace replace;
        replace.init(argv[1], argv[2], argv[3]);
        res = replace.ft_replace();
        if (res){
            return (-1);
        }
    }
    else
    {
        std::cout << "arguments error" << std::endl;
        return (-1);
    }
    return (0);
}