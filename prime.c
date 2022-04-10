#include <stdio.h>
#include <stdlib.h>
typedef enum { false, true }bool;  
#include <stdbool.h>  
int main(void)
{
    bool isPrime;
    int num1;
    int i;
    while(1)
    {
    scanf("%d", &num1);
    i=0;
    for (int p = 2; p <= num1; ++p)
    {
        isPrime = true;
        for (int d = 2; d < p; ++d)
        {
            if (p % d == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            i++;
            printf("%03d\t", p);
            if(i%5==0)printf("\n");
        }
    }
    }
}