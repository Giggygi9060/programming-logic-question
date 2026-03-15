#include <stdio.h>

int main(void){
    int x, y, z, middle;
    printf("Leia tres numeros inteiros: ");
    scanf("%d%d%d", &x, &y, &z);
    middle = (x+y+z)/3;
    printf("Media aritmetica: %d\n", middle);
}