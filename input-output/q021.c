/*Escreva um programa que leia o preço de produção de um determinado produto e a
margem de lucro desejada pelo fabricante e calcule qual deve ser o seu preço de
venda.*/

#include <stdio.h>

void main()
{
    float priceProduction, profitMargin, salePrice;
    printf("Price of production: ");
    scanf("%f", &priceProduction);
    printf("Profit margin: ");
    scanf("%f", &profitMargin);
    salePrice = priceProduction * profitMargin;
    printf("Sale price: %.2f", salePrice);
}