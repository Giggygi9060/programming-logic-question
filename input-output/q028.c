/*Uma loja oferece três formas de pagamento para os seus clientes. Caso a compra seja
paga à vista, a loja oferece um desconto de 10%. Caso a compra seja paga em três
parcelas no cartão de crédito, o cliente paga o preço original (sem descontos, mas sem
juros) da compra. Caso a compra seja paga em dez parcelas no cartão de crédito, a loja
acrescenta uma taxa de juros de 20% sobre o valor da compra. Todas as dez parcelas
têm exatamente o mesmo valor. Com base nessas informações, escreva um programa
que leia o valor da compra de um cliente e informe: o valor da compra se ela for paga
à vista, o valor de cada parcela se a compra for paga no cartão e em três parcelas (por

exemplo, 3 parcelas de R$ 50,00) e o valor de cada parcela se a compra for paga com o
cartão de crédito e em dez parcelas.*/

#include <stdio.h>

void main(){
    const float discont1 = 0.90;
    const float discont2 = 1.20;
    float price, installments1, installments2;
    printf("Insert the value: ");
    scanf("%f", &price);
    installments1 = price/3;
    installments2 = (price*discont2)/10;
    printf("At sight: R$%.2f\nCredit Card (3x): R$%.2f\nCredit Card (10x): R$%.2f\n", price*discont1, installments1, installments2);
}