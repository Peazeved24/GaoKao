#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av) 
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
        char *s1 = av[1];
        char *s2 = av[2];
        int ascii[256] = {0};

        while(s1[i])
        {
            j = 0;
            while(s2[j])
            {
                if(s1[i] == s2[j] && !ascii[s1[i]])
                {
                    write(1, &s1[i], 1);
                    ascii[s1[i]] = 1;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}