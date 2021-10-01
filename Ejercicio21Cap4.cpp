#include <iostream>
#include <math.h>
/**
 * Problema 21 capitulo 4
 * 
 * Un estudiante avanzado desea conocer la altura del astabandera
 * localizada frente a la oficina. Sus mediciones muestran que a una
 * distancia de 183 m, a la base del asta, el angulo de elevacion 
 * del extremo del asta es de 22,5°.
 * 
 * Haga un programa para determinar la altura del asta.
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 16 Septiembre 2021

using namespace std;

int main()
{
    double base, angulo, altura, PI=3.14159265;
    cout << "Ingrese la base ";
    cin >> base;
    cout << "Ingrese el angulo ";
    cin >> angulo;
    altura=base*(tan(angulo*PI/180));
    cout << "La altura es: " << altura;

    return 0;
}