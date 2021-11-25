#include <iostream>
#include <cstring>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (s2[i] == '\0')
        return(0);
    else
        return (1);
}

int ft_countword(char *s, char *f)
{
    int count = 0;
    int len = strlen(f);

    while (*s != '\0')
    {
        if (ft_strcmp(s, f) == 0)
        {
            s += len - 1;
            count += 1;
        }
        s++;
    }
    return (count);
}

/*int main()
{
    char s1[] = "мfjdkl   wfkl  rklr";
    char s2[] = "kl";

    std::cout << ft_countword(s1, s2);
    return (0);
}*/