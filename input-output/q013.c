/*Escreva um programa que leia um valor em KB e calcule o seu valor correspondente
em bits, bytes, MB e GB.*/

#include <stdio.h>

void main()
{
    double kb, bits, bytes, mb, gb;
    printf("KB: ");
    scanf("%lf", &kb);
    bits = kb * 8000;
    bytes = bits / 8;
    mb = kb * 100;
    gb = mb * 1000;
    printf("Bits: %.2lf\nBytes: %.2lf\nMB: %.2lf\nGB: %.2lf\n", bits, bytes, mb, gb);
}