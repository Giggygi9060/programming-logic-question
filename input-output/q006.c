/*
Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu
sucessor.
*/

#include <stdio.h>

void main(){
    int numInt;
    printf("An integer number: ");
    scanf("%d", &numInt);
    printf("Successor: %d\nPredecessor: %d\n", numInt-1, numInt+1);
}