#include <iostream>
#include <math.h>
/**
 * Problema 26 capitulo 4
 * 
 * d
 * |\-
 * | \ - 
 * |  \  -
 * |   \   - 
 * |    \    -
 * |c_____\b____-_a
 * 
 * Distancia de ab=8m, angulo bad=20°, ad=14m.
 * 
 * Encontrar el area del siguiente triangulo.
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 16 Septiembre 2021

using namespace std;

int main()
{
    double DISab=8, ANGbad=20, DISad=14, PI=3.14150265, DISac, DISdc, ANGcda, area;
    ANGcda=180-90-ANGbad;
    DISdc=14*sin(ANGcda*PI/180);
    DISac=14*cos(ANGcda*PI/180);
    area=DISdc*DISac/2;
    cout<<"El area del triangulo es: "<<area;
    return 0;
}