/*Escreva um programa que leia o número total de questões existentes em uma prova e
o número de questões que um candidato acertou e determine o seu percentual de
acertos e o seu percentual de erros.*/

#include <stdio.h>

void main(){
    int total, hits, fault;
    float hitsPerc, faultsPerc;
    printf("Total of questions and correct answers: ");
    scanf("%d%d", &total, &hits);
    fault = total - hits;
    hitsPerc = hits/total;
    faultsPerc = fault/total;
    printf("%f\n%f\n", hitsPerc, faultsPerc);
}