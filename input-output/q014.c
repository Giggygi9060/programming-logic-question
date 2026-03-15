/*Escreva um programa que leia uma palavra e calcule o seu comprimento.*/

#include <stdio.h>
#include <string.h>

// v1
void main(){
    char word[99];
    printf("Insira alguma palavra: ");
    scanf("%99s", word); // word já é ponteiro pro 1° caractere
    printf("Length: %zu\n", strlen(word));
}