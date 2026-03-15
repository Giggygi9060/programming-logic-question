#include <stdio.h>

int main(void){
    int x, y, z, p1, p2, p3, middle;
    printf("Valor de x e seu peso: ");
    scanf("%d %d", &x, &p1);
    printf("Valor de y e seu peso: ");
    scanf("%d %d", &y, &p2);
    printf("Valor de z e seu peso: ");
    scanf("%d %d", &z, &p3);
    middle = ((x*p1) + (y*p2) + (z*p3))/(p1+p2+p3);
    printf("Media ponderada: %d\n", middle);
}