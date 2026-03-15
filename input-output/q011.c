/*Escreva um programa que leia um valor em real, a cotação atual do dólar e calcule o
valor informado pelo usuário em dólares.*/

#include <stdio.h>

void main()
{
    float brl, dollarCotation;
    printf("Value in BRL: ");
    scanf("%f", &brl);
    printf("Dollar cotation: ");
    scanf("%f", &dollarCotation);
    printf("Value in dollar: %f", brl / dollarCotation);
}