/*
Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
área e o seu comprimento.
*/
#define PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>

void main(){
    double ray, area, length;
    printf("Ray value: ");
    scanf("%lf", &ray);
    area = PI*pow(ray, 2);
    length = 2*PI*ray;
    printf("Area: %2.lf\nLength: %2.lf\n", area, length);
}