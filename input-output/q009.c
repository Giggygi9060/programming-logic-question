/*Escreva um programa que leia o valor de uma distância percorrida em km e o tempo
gasto em horas e calcule a velocidade média em m/s.*/

#include <stdio.h>

void main(){
    float dist, time, velocity;
    printf("Distance (km): ");
    scanf("%f", &dist);
    printf("Time (h): ");
    scanf("%f", &time);
    velocity = (dist/time) * 3.6;
    printf("Velocity (m/s): %f\n", velocity);
}