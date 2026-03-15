/*Escreva um programa que leia um número inteiro N e imprima dos 10 primeiros
elementos da sua tabuada. A saída do programa deve seguir o formato abaixo, que
mostra os 5 primeiros elementos da tabuada do 2.*/

#include <stdio.h>

void main(){
    int n, first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth;
    printf("Insert a value: ");
    scanf("%d", &n);
    first = n * 1;
    second = n * 2;
    third = n * 3;
    fourth = n * 4;
    fifth = n * 5;
    sixth = n * 6;
    seventh = n * 7;
    eighth = n * 8;
    ninth = n * 9;
    tenth = n * 10;
    printf("%d * 1 = %d\n%d * 2 = %d\n%d * 3 = %d\n%d * 4 = %d\n%d * 5 = %d\n%d * 6 = %d\n%d * 7 = %d\n%d * 8 = %d\n%d * 9 = %d\n%d * 10 = %d\n", n, first, n, second, n, third, n, fourth, n, fifth, n, sixth, n, seventh, n, eighth, n, ninth, n, tenth);
}