#include <iostream>
#include <math.h>
/**
 * Problema 28 capitulo 4
 * 
 * En el parque Rios Gemelos hay un puente peatonal desde X a Y.
 * Los directores del parque desean agregar puentes de X a Z y
 * de Y a Z. Teniendo en cuenta los angulos ZXY=73 y ZYX=50 y 
 * la distancia de XY= 122m.
 * 
 * Que longitudes deberan tener?
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 16 Septiembre 2021

using namespace std;

int main()
{
    double PI=3.14159265, disXY=122, disZY, disZX, angZXY=73, angZYX=50, angXZY;
    angXZY=180-angZXY-angZYX;
    disZY=(disXY*(sin(angZXY*PI/180)))/(sin(angXZY*PI/180));
    disZX=(disXY*(sin(angZYX*PI/180)))/(sin(angXZY*PI/180));
    cout<<"La longitud XZ es: "<<disZX<<endl;
    cout<<"La longitud YZ es: "<<disZY<<endl;
    return 0;
}