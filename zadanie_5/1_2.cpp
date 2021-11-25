#include <iostream>
#include <cstring>
#include <cstdlib>

bool    ft_cmp(char *str, size_t len)
{
    int i = 0;
    int j = len - 1;

    while (i < len)
    {
        if (str[i] != str[j])
            return (false);
        i++;
        j--;
    }
    return (true);
}

int ft_sumstr(char *str)
{
    int sum;
    int i = 0;

    sum = std::atoi(str);

    while (str[i] != '\0')
    {
        if (str[i] > '9' || str[i] < '0')
            sum += std::atoi(str + i + 1);
        i++;
    }
    return (sum);
}

int main()
{
    size_t  len;
    char    str[150];

    std::cin >> str;
    //1 задание
    len = std::strlen(str);
    if (ft_cmp(str, len))
        std::cout << "1 : YES\n";
    else
        std::cout << "1 : NO\n";
   //2 задание
    std::cout << "2 : " << ft_sumstr(str) << "\n";
    
    
}