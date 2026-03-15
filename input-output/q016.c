/*Escreva um programa que leia uma letra minúscula e imprima a sua letra maiúscula
correspondente.*/

#include <stdio.h>
#include <ctype.h>

void main(){
    char letter;
    printf("Letter: ");
    scanf("%c", &letter);
    letter = tolower(letter);
    printf("%c\n", toupper(letter));
}