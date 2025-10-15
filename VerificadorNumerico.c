// DESENVOLVIDO POR MATHEUS HENRIQUE - NOME DA DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA
// UNIDADE 1 - FUNDAMENTOS DE ALGORITMOS E PROGRAMAÇÃO

#include <stdio.h>

int main(){
    int n1, n2, n3;
    // ENTRADA DE DADOS
    printf("digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf("\n ---- RESULTADOS ---- \n\n");

    // OPERAÇÕES ARITMÉTICAS

    int soma = n1 + n2 + n3;
    int subtracao = n1 - n2 - n3;
    int multiplicacao = n1 * n2 * n3;
    float divisao = (float)n1 / n2 / n3;

    printf("1. Calculos Aritmeticos: \n");
    printf("    Soma: %d\n", soma);
    printf("    Subtracao: %d\n", subtracao);
    printf("    Multiplicacao: %d\n", multiplicacao);
    printf("    Divisao: %.2f\n\n", divisao);

    // OPERAÇÕES RELACIONAIS

    printf("2. Verificacoes Relacionais:\n");

    // verifica se o primeiro é maior que o segundo
    if (n1 > n2) {
        printf("    O primeiro numero (%d) E maior que o segundo (%d).\n", n1, n2);
    } else {
        printf("    O primeiro numero (%d) NAO E maior que o segundo (%d).\n", n1, n2);
    }

    // verifica se o segundo é menor que o terceiro
    if (n1 < n3){
        printf("    O segundo numero (%d) E menor que o terceiro (%d).\n\n", n2, n3);
    } else {
        printf("    O segundo numero (%d) NAO E menor que o terceiro (%d).\n\n", n2, n3);
    }

    // OPERAÇÕES LÓGICAS

    //verifica se o primeiro numero é positivo E o segundo é par
    printf("3. Verificacao Logica:\n");
    if (n1 > 0 && n2 % 2 == 0) {
        printf("    Mensagem Especial: O primeiro numero e positivo E o segundo e par!\n\n\n");
    } else {
        printf("    A condicao (primeiro numero ser positivo E o segundo ser par) nao foi atendida.\n");
    }

    return 0;
}