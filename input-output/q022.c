/*Escreva um programa que leia dois números inteiros a e b e determine o maior
múltiplo de a que é menor ou igual a b. Por exemplo, o maior múltiplo de 3 menor ou
igual a 50 é 48.*/
#include <stdio.h>

void main(){
    int a, b, greatMultiple;
    printf("Insert values to b and a, respectivly: ");
    scanf("%d%d", &a, &b);
    greatMultiple = (b/a) * a;
    printf("The greateast multiple is %d\n", greatMultiple);
}