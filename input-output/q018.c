/*Escreva um programa que leia o valor do seno de um ângulo e calcule o valor do seu
cosseno.*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

void main(){
    float angle, sine, cosine;
    printf("Angle: ");
    scanf("%f", &angle);
    printf("Sine of angle: ");
    scanf("%f", &sine);
    cosine = sqrt(1 - pow(cos(angle), 2));
    printf("Cosine: %f", cosine);
}