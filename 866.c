#include <stdio.h>
#include <stdlib.h>

int primePalindrome(int n)
{
    int num;
    int flag=0;
    for (int i = n / 2 * 2 + 1;flag; i += 2)
    {
        for (int j = 2; j < sqrt(i); j += 2)
        {
            if (i % j == 0)
                flag=0;
                break;    
        }

    }
}