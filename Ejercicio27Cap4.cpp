#include <iostream>
#include <math.h>
/**
 * Problema 27 capitulo 4
 * 
 * Un corredor de bienes raices desea medir la longitud del lago mostrado.
 * Para encontrar la longitud AB, localiza un punto en C a 95m de A y a 
 * 122m de B. Encontro que la medida del angulo ACB es de 47.5°.
 * 
 * Cual es la longitud del lago?
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 16 Septiembre 2021

using namespace std;

int main()
{
    double PI=3.14159265, disBC=122, disAC=95, angACB=47.5, disAB;
    disAB=sqrt(pow(disBC,2)+pow(disAC,2)-(2*(disAC*disBC))*cos(angACB*PI/180));
    cout<<"La longitud del lago es: "<<disAB;
    return 0;
}