/*Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a
sua área.*/
#include <stdio.h>
#include <math.h>

void main()
{
    double base, heigth, area;
    printf("Base: ");
    scanf("%lf", &base);
    printf("Heigth: ");
    scanf("%lf", &heigth);
    area = (base * heigth) / 2;
    printf("Area: %lf\n", area);
}