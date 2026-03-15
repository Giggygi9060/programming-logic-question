/*
Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada.
*/
#include <stdio.h>
#include <math.h>

void main(){
    int num;
    double doubleN, triple, square, cube, squareRoot;
    do{
        printf("A positive number: ");
        scanf("%d", &num);
    }while(num < 0);
    doubleN = num * 2;
    triple = num*3;
    square=pow(num,2);
    cube=pow(num,3);
    squareRoot=sqrt(num);
    printf("Double: %2.lf\nTriple: %2.lf\nSquare: %2.lf\nCube: %2.lf\nSquare root: %2.lf\n", doubleN, triple, square, cube, squareRoot);
}