#include <stdio.h>

int main()
{

    int n1, n2, n3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    int soma = n1 + n2 + n3;
    int subtracao = n1 - n2 - n3;
    int multiplicacao = n1 * n2 * n3;
    float divisao = (float)n1 / n2 / n3;

    printf("RESULTADOS \n");
    printf("    Soma: %d\n", soma);
    printf("    Subtracao: %d\n", subtracao);
    printf("    Multiplicacao: %d\n", multiplicacao);
    printf("   Divisao: %.2f", divisao);

    printf("VERIFICACOES RELACIONAIS\n\n");

    if (n1 > n2)
        
    {
        printf("O primeiro valor (%d) e maior que o valor (%d)\n", n1, n2);
    }
    else
    {
        printf("o valor (%d) e maior que o valor (%d)\n", n1, n2);
    }

    printf("VERIFICACOES LOGICAS\n\n");

    if (n1 > 0 && n1 % 2 == 0) {
        printf("    Mensagem Especial: o primeiro numero e positivo e o segundo e par!\n\n\n");
    } else {
        printf("    A condicao (primeiro numero ser positivo E o segundo ser par) nao foi atendida.\n");
    }
    return 0;
}