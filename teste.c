#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("Digite o primeiro numeroi: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf(" ---- RESULTADOS ----\n\n\n");

    int soma = n1 + n2 + n3;
    int subtracao = n1 - n2 - n3;
    int multiplacao = n1 * n2 * n3;
    float divisao = (float)n1 / n2 / n3;

    printf("1. Calculos Aritmeticos: \n");
    printf("Soma %d\n", soma);
    printf("Subtracao %d\n", subtracao);
    printf("Multiplicacao %d\n", multiplacao);
    printf("Divisao %.2f\n\n", divisao);

    printf("2. Verificacoes Relacionais:\n");

    if (n1 > n2) {
        printf("    O primeiro numero (%d) E maior que o segundo (%d).\n", n1, n2);
    } else {
        printf("    O primeiro numero (%d) NAO E maior que o segundo (%d).\n", n1,n2);
    }


    if (n2 < n3) {
        printf("    O segundo numero (%d) E menor que o terceiro (%d).\n\n", n2, n3);
    } else {
        printf("    O segundo numero (%d) NAO E menor que o terveiro (%d).\n\n", n2, n3);
    }



    printf("3. Verificacao Logica:\n");
    if (n1 > 0 && n2 % 2 == 0 ) {
        printf("    Mensagem Especial: O primeiro nuemro e positivo E o segundo e par!\n");
    } else {
        printf("    A condicao (primeiro nuemro ser positivo E o segundo ser par) nao foi atendida.\n");
    }

    // verificação extra! se o numero é par ou impar

    printf("4. Verificacao se os numeros sao pares ou impares:\n");
    if (n1 % 2 == 0) {
        printf("Esse numero (%d) e par!", n1 );
    } else {
        printf(" esse numero (%d) e impar! ", n1);
    }

    return 0;
}