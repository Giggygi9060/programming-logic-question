/*Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e
determine a distância entre estes dois pontos. A distância entre dois pontos pode ser
determinada através da distância euclidiana.
distancia = sqrt(x1-x2)²+(y1-y2)²*/

#include <stdio.h>
#include <math.h>

void main()
{
    float x, y, p, q, distance;
    printf("X and Y values: ");
    scanf("%f%f", &x, &y);
    printf("P and Q values: ");
    scanf("%f%f", &p, &q);
    distance = sqrt(pow(x-p, 2)+pow(y-q, 2));
    printf("Distance: %f", distance);
}