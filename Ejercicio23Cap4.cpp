#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
/**
 * Problema 23 capitulo 4
 * 
 * Encontrar la fuerza resultante que actua sobre P,
 * con la siguiente informacion: angulo CWB=41°; angulo CWA=72°
 * y vector A=100N y vector B=180N.
 * 
 * Quiero aclarar que en esta tuve que improvisar un poco ya que
 * el vector P no venia en el ejemplo y tuve que determinar a P 
 * como el resultante de las fuerzas A y B.
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 16 Septiembre 2021

using namespace std;

int main()
{
    double FP, FA, FB, PI=3.14159265;
    FA=100*cos(72*PI/180);
    FB=180*cos(41*PI/180);
    FP=FA+FB;
    cout<<"La fuerza resultante de P es: "<<FP;
    return 0;
}