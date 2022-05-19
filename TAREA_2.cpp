/* Autor: Oscar Vivaldi Partido Ramirez, realizado: 04/02/2022

tarea 1 programa que calculara el area de un TRAPECIO

*/

#include <stdio.h>

#include<math.h>

int main(){

//DECLARACION DE VARIABLES

float area, B, b, h ;

//ENTRADA DE DATOS

printf("Ingresa la Base Mayor (B): ");

scanf("%f",&B);

printf("Ingresa la Base Menor (b); ");

scanf("%f", &b);

printf("Ingrese la altura (h): ");

scanf("%f", &h);

//PROCESO

area=(B+b)*h/2;

//SALIDA

printf("EL AREA DEL TRAPECIO ES: %f cm2", area);

return 0;

}
