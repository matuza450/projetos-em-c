// EXERCÍCIO EM C - SEQUÊNCIA
// ATIVIDADE PROPOSTA: 3. Lê um número e mostra seu sucessor e seu antecessor na tela.
// Tutor: Lázaro
//Data de Criação: 18/10/2025

#include <stdio.h>

int main(){
    int numero;

    printf("Por favor, Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\n--- Analisando o numero %d ---\n", numero);
    printf("O seu antecessor e: %d\n", numero - 1);
    printf("O seu sucessor e: %d\n", numero + 1);

    return 0;
}