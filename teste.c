#include <stdio.h>

int main(){

    float precoVenda, numeroPessoas, valorFinal;

    const float valorDesconto = 0.1;

    printf("Quanto deu o valor total da mesa: ");
    scanf("%f", &precoVenda);

    printf("Quantas pessoas tem na mesa? ");
    scanf("%f", &numeroPessoas);

    valorFinal = precoVenda / numeroPessoas - valorDesconto;

    printf("O valor no total para cada integrante da mesa + desconto seria de: %.2f", valorFinal);

}