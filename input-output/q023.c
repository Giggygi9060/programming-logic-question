/*Escreva um programa que leia o valor do raio de uma esfera e determine o seu
volume.*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

void main()
{
    double ray, volume;
    printf("Insert the ray value: ");
    scanf("%lf", &ray);
    volume = (4*PI*pow(ray, 3))/3;
    printf("Volume: %.2lf\n", volume);
}