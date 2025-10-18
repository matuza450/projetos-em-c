// EXERCÍCIO EM C - SEQUÊNCIA
// ATIVIDADE PROPOSTA: 2. Mostrar a média aritmética entre 3 números passados pelo usuário.
// Tutor: Lázaro
//Data de Criação: 18/10/2025

#include <stdio.h>

int main()
{

    float n1, n2, n3;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("\nOs numeros digitados foram: %.2f, %.2f e %.2f\n", n1, n2, n3);
    printf("A media aritmetica entre eles e: %.2f\n", media);

    return 0;
}