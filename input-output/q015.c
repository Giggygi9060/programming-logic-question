/*Escreva um programa que leia uma palavra e um número inteiro k e identifique a k-
ésima letra da palavra informada pelo usuário.*/
#include <stdio.h>

void main(){
    int k;
    char word[100];
    printf("Word: ");
    scanf("%99s", word);
    printf("K value: ");
    scanf("%d", &k);
    printf("Knesime letter: %c", word[k]);
}