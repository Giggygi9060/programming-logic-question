/*Escreva um programa que leia o comprimento e a largura de uma cisterna e a
quantidade de litros que o usuário deseja armazenar na mesma e determine quantos
metros ele deve encher a cisterna para obter a quantidade de litros desejada.*/

#include <stdio.h>

void main()
{
    float length, width, litters, metters, area;
    printf("Length and with of cistern: ");
    scanf("%f%f", &length, &width);
    printf("Litters: ");
    scanf("%f", &litters);
    area = length * width;
    metters = (litters/1000) / area;
    printf("Metters: %f", metters);
}