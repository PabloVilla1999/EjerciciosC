#include <iostream>
#include <math.h>
/**
 * Problema 25 capitulo 4
 * 
 * Rusbox y Ashville, una firma de ingenieria civil, esta construyendo un puente
 * a traves del rio Tomoka, desde el punto A al B. Para encontrar la longitud del
 * puente, un ingenierio coloca estacas en la orilla del rio, en los puntos A y B.
 * 
 * Localiza enseguida un punto C a 30m de A, tal que el triangulo BAC sea 
 * rectangulo. Encuentra que el angulo BCA es de 55°. 
 * Que longitud debe tener el puente para salvar el rio?
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 16 Septiembre 2021

using namespace std;

int main()
{
    double AC=30, AB, anguloBCA=55, anguloABC, PI=3.14159265;
    anguloABC=180-anguloBCA-90;
    AB=AC/tan(anguloABC*PI/180);
    cout<<"La longitud necesaria para salvar el rio es de: "<<AB;
    return 0;
}