/*Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
imprima os 5 primeiros termos desta progressão.*/

#include <stdio.h>

void main(){
    int commonDifference, firstTherm;
    printf("Common difference: ");
    scanf("%d", &commonDifference);
    printf("First therm: ");
    scanf("%d", &firstTherm);
    printf("1st therm: %d\n2nd therm: %d\n3th therm: %d\n4th therm: %d\n5th therm: %d\n", firstTherm, firstTherm+commonDifference, firstTherm+commonDifference*2, firstTherm+commonDifference*3, firstTherm+commonDifference*4);
}