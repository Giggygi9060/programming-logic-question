
/*Em um determinado concurso público, para cada questão que um candidato acerta ele
ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada
questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um
programa que leia o número de questões que um candidato acertou, o número de
questões que ele errou e o número de questões que ele deixou em branco e
determine a sua pontuação final.*/

#include <stdio.h>

void main()
{
    const int hitsPoints = 3;
    const int faultPoints = 5;
    int totalQuestions, hits, fault, whiteQuestions, score;
    printf("Total of questions: ");
    scanf("%d", &totalQuestions);
    printf("Hits, faults and white questions: ");
    scanf("%d%d%d", &hits, &fault, &whiteQuestions);
    score = (hits * hitsPoints) - (fault * faultPoints);
    printf("Final Score: %d", score);
}