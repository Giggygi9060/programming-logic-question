/*Escreva um programa que leia um valor em polegadas e o converta para centímetros,
considerando que uma polegada equivale a 2.54 cm.*/

#include <stdio.h>

void main()
{
    float inches;
    float centimeters = 2.54;
    printf("Inches: ");
    scanf("%f", &inches);
    printf("Centimeters: %.2f cm\n", inches*centimeters);
}