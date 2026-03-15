/*Escreva um programa que leia a área de uma casa e o valor cobrado por um arquiteto
por cada metro quadrado de um projeto arquitetônico e calcule o custo final do
projeto.*/

#include <stdio.h>

void main()
{
    float houseArea, value, finalCost;
    printf("Area of house: ");
    scanf("%f", &houseArea);
    printf("Price by metter: ");
    scanf("%f", &value);
    finalCost = houseArea * value;
    printf("Final cost: %.2f\n", finalCost);
}