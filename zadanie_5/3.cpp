#include <iostream>
#include <cstring>
#include <string.h>

int main()
{
    char    *str = new char[100];
    int     i = 0;
    char    *tmp = str;
    char    *ptr;

    std::cin.get(str, 100);
    while (i != 2)
    {
        std::cout << (strtok_r(str, " ", &ptr))[0] << ". ";
        str = nullptr;
        i++;
    }
    std::cout << strtok_r(str, " ", &ptr);
    delete (tmp);
    return (0);
}