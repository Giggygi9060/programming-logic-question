#include <stdio.h>
#include <math.h>

int main(void){
    float l1, area, perimeter;
    printf("Lado do quadrado: ");
    scanf("%f", &l1);
    area = powf(l1, 2);
    perimeter = l1 * 4;
    printf("Area: %2.f\nPerimetro: %2.f\n", area, perimeter);
}