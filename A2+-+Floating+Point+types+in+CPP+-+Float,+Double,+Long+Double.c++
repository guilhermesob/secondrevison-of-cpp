//LECTURE : Floating point Types in C++


#include <stdio.h>

int main(){
//Floating point numbers : 0.3333 , 98.6, pi

/*
Floating point types :
    float               - single precision --- 4 bytes
    double           - double precision --- 8 bytes
    long double   - extended precision --- 8 bytes
*/

/*
Floating point literals :
*/
float a = 0.1F;
double b = 0.2;
long double c = 0.3L;

double plancks_constant = 6.626070044e-34;

// Double with decimal digits ; %lf , %le or %lg
// Long Double w/ decimal digits ; %Lf , %Le or %Lg

double an = 6.0221409e23;
printf("Avogadro's number : %le %lf %lg \n",an , an, an );
float hp = 9.76;
printf("Hogwarts Platform : %e %f %g \n",hp ,hp,hp);


} 
