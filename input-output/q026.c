/*Escreva um programa que leia o peso e a altura dos atletas das quatro duplas que vão
participar de um torneio de vôlei de praia e calcule o peso e a altura média de cada
dupla e o peso e a altura média de todos os jogadores do torneio.*/

#include <stdio.h>

void main()
{
    float weigth1, weigth2, weigth3, weigth4, weigth5, weigth6, weigth7, weigth8, height1, height2, height3, height4, height5, height6, height7, height8;
    printf("Weigths: ");
    scanf("%f%f%f%f%f%f%f%f", &weigth1, &weigth2, &weigth3, &weigth4, &weigth5, &weigth6, &weigth7, &weigth8);
    printf("Heigths: ");
    scanf("%f%f%f%f%f%f%f%f", &height1, &height2, &height3, &height4, &height5, &height6, &height7, &height8);
    float middleWieigth1, middleWieigth2, middleWieigth3, middleWieigth4;
    float middleHeigth1, middleHeigth2, middleHeigth3, middleHeigth4;
    middleWieigth1 = (weigth1 + weigth2) / 2;
    middleWieigth2 = (weigth3 + weigth4) / 2;
    middleWieigth3 = (weigth5 + weigth6) / 2;
    middleWieigth4 = (weigth7 + weigth8) / 2;
    middleHeigth1 = (height1 + height2) / 2;
    middleHeigth2 = (height3 + height4) / 2;
    middleHeigth3 = (height5 + height6) / 2;
    middleHeigth4 = (height7 + height8) / 2;
    printf("Peso médio da dupla 1: %f\nPeso médio da dupla 2: %f\nPeso médio da dupla 3: %f\nPeso médio da dupla 4: %f\n", middleWieigth1, middleWieigth2, middleWieigth3, middleWieigth4);
    printf("Altura média da dupla 1: %f\nAltura média da dupla 2: %f\nAltura média da dupla 3: %f\nAltura média da dupla 4: %f\n", middleHeigth1, middleHeigth4, middleHeigth3, middleHeigth4);
    printf("Peso médio geral: %f\n", (weigth1 + weigth2 + weigth3 + weigth4 + weigth5 + weigth6 + weigth7 + weigth8) / 8);
    printf("Altura média geral: %f\n", (height1 + height2 + height3 + height4 + height5 + height6 + height7 + height8) / 8);
}