/*Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 300,00.
Escreva um programa que leia o comprimento e a largura de um terreno localizado
nesta cidade e calcule o seu valor de mercado.*/
#include <stdio.h>

void main()
{
    float length, width, area, merchandiseValue;
    const float PRICE = 300;
    printf("Length of ground: ");
    scanf("%f", &length);
    printf("Width of ground: ");
    scanf("%f", &width);
    area = length * width;
    merchandiseValue = area * PRICE;
    printf("Merchandise value: %.2fR$", merchandiseValue);
}