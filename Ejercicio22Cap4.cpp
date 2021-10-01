#include <iostream>
#include <math.h>
/**
 * Problema 22 capitulo 4
 * 
 * Calcular el area de un poligono regular de N lados,
 * cada uno de longitud L.
 *      Area=1/2 N^2 L Cot(180°/N)
 * 
 * El programa debe introducir valores de N.
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 16 Septiembre 2021

using namespace std;

int main()
{
    double Area, Lados, Longitud, PI=3.14159264;
    cout<<"Por favor ingrese los lados del poligono: ";
    cin>>Lados;
    cout<<"Por favor ingrese la longitud del lado: ";
    cin>>Longitud;
    /**La parte de la formula de Cot(180°/N) la sustitui por otra forma de ver la expresion como 1/tan(180°/N)
     * Otra aclaracion es que el resultado no concordaba con la calculadora y era porque la computadora no hacia 
     * la conversion a degress y al momento de aplicar las funciones estas no eran correctas, pero investigando 
     * encontre que definiendo PI y dividiendolo entre 180 grados ya funcionaba correctamente.
    **/
    Area=(1/2)*(Lados*Lados)*Longitud*(1/(tan((180*(PI/180))/Lados)));
    cout<<"El area es: "<<Area;
    return 0;
}