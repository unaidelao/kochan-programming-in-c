/*
 * Aplicación del algoritmo de Erastótenes
 * para los 150 primeros números primos.
 *
 * No he sido capaz de entenderlo, así que lo he sacado de la siguiente web,
 * Fuente:
 * https://github.com/callahanchris/Programming-in-C/blob/master/Chapter%2007/ex7.c
 */


#include <stdio.h>

int main (void)
{
    int i, n = 150, j, prod;
    unsigned long long int p[n];
    
    for (i = 0; i <= n; ++i)
        p[i] = 0;
    
    
    i = 2;
    
    while (i <= n)
    {        
        for (j = 2; j <= n; ++j)
        {
            prod = i * j;
                if (prod <= n)
                    p[prod] = 1;      
        }
        ++i;
    }
    
    p[2] = 0;
    
    for (i = 2; i <= n; ++i)
        if (p[i] == 0)
            printf("%i ", i);
            
    printf("\n");
    
    return 0;
}
