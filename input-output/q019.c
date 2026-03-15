/*Escreva um programa que leia os valores de dois ângulos internos de um triângulo e
calcule o valor do terceiro ângulo.*/
#include <stdio.h>

void main() {
    float angle1, angle2, angle3;
    printf("1st and 2nd angles: ");
    scanf("%f%f", &angle1, &angle2);
    angle3 = 180 - (angle1 + angle2);
    printf("3th angle: %f", angle3);
}