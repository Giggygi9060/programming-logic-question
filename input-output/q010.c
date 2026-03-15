/*Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e
calcule o valor da hipotenusa.*/

#include <stdio.h>
#include <math.h>

void main(){
    float cathet1, cathet2, hipotenuse;
    printf("Cathets 1 and 2: ");
    scanf("%f%f", &cathet1, &cathet2);
    hipotenuse = sqrt(pow(cathet1, 2) + pow(cathet2, 2));
    printf("Hipotenuse: %f\n", hipotenuse);
}