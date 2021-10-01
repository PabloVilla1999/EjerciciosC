#include <iostream>
#include <math.h>
/**
 * Problema 24 capitulo 4
 * 
 * A 274m de la base de un faro, al nivel del piso, el angulo 
 * de elevacion es de 30°.
 * 
 * Encontrar la altura del faro.
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 16 Septiembre 2021

using namespace std;

int main()
{
    double base=274, altura, angulo=30, PI=3.14159265;
    altura=base*tan(angulo*PI/180);
    cout<<"La altura del faro es: "<<altura;
    return 0;
}