#include <iostream>
#include <math.h>
/**
 * Problema 30 capitulo 4
 * 
 * Calcular cosx mediante esta serie: cos x= 1-x^2 / 2! + x^4 / 4! - x^6 / 6!...
 * donde x esta en radianes.
 * 
 * Haga un programa para calcular la serie
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 16 Septiembre 2021

using namespace std;

int factorial(int a)
{
    int fact=1;
    for(int i=1; i<=a; i++)
    {
        fact=fact*i;
        return fact;
    }
}

int main()
{
    int x, Ffact, c=1;
    double calculo, acumulador=0, pi=3.14159265;
    cout<<"Por favor ingrese x: ";
    cin>>x;
    for(int a=2; a<=x; a=a+2)
    {
        Ffact=factorial(a);
        calculo=pow(x,a)/Ffact;
        if(c%2==0)
        {
            acumulador=acumulador-calculo;
        }
        else
        {
            acumulador=acumulador+calculo;
        }
        c++;
    }
    acumulador=cos((x-acumulador)*pi/180);
    cout<<"El calculo de la serie es: "<<acumulador;
    return 0;
}