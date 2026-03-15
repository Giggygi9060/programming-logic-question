/*Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu
valor correspondente em Fahrenheit e em Kelvin.*/
#include <stdio.h>

void main(){
    float celsius, fahrenheit, kelvin;
    printf("Temperature in °C: ");
    scanf("%f", &celsius);
    fahrenheit = celsius * (9/5) + 32;
    kelvin = celsius + 273;
    printf("Kelvin: %f\nFahrenheit: %f\n", kelvin, fahrenheit);
}