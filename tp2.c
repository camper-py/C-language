#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"

#define gravedad 9, 8
#define const 0.017453

double factorial(int numero)
{
    if (numero <= 1)
        return 1;
    else
        return (numero * factorial(numero - 1));
}

double power(int pot, double num)
{
    if (pot != 0)
        return (num * power(pot - 1, num));
    else
        return 1;
}

double seno(double n)
{
    double sen = 0;
    // Taylor series sin(x) = (-1)^n*x^(2n+1)/(2n+1)!
    for (int i = 0; i < 19; i++)
    {
        sen += (power(i, -1.0) * power((2 * i) + 1, n)) / factorial((2 * i) + 1);
    }
    return sen;
}

int punto_de_caida(int velocidad, double ang)
{
    double rad;
    int distancia;
    rad = const * (2 * ang);

    distancia = power(2, velocidad) * seno(rad) / gravedad;
    return distancia;
}

int main(void)
{
    char c,vel[100],dist[100], angulo[100];
    int val = 1, punto,cont;
    
    while (val != 0)
    {
    int i = 0;
    printf("\ningrese el Angulo");
        }
        
    /*    
    scanf("%d", &dist);
    scanf("%d", &vel);
    */

        
    }
   
    return 0;
}