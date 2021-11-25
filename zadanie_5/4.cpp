#include <iostream>
#include <cstring>

char    *ft_rash(char *str, char *resh)
{
    size_t  len = strlen(str) - 1;
    size_t  len2 = strlen(resh);
    int     j = 0;
    char    *s;
    
    if (resh[0] != '\0' && resh[0] != '.')
        return (str);
    while (str[len] != '.' && len > 0)
        len--;
    s = new char[len - 1 + len2 + 1];
    str[len] = '\0';
    s = strdup(str);
    while (resh[j] != '\0')
    {
        s[len] = resh[j];
        len++;
        j++;
    }
    s[len] = '\0';
    return (s);
}

/*int main()
{
    char    s1[] = "zdfkas.apk.afav";
    char    s2[] = "./hbk";
    std::cout << ft_rash(s1, s2);
    return (0);
}*/