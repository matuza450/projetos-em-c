// Software para uma loja de eletrodoméstico    

#include <stdio.h>

int main(){

    // Criação das Variáveis

    float precoVenda, valorImposto, valorDesconto, precoFinal;

    // Constantes

    const float taxaImposto = 0.1;
    const float descontoPadrao = 0.5;

    // Entrada

    printf("Informe o preco de venda do produto: ");
    scanf("%f", &precoVenda);

    // Processamento

    valorImposto = precoVenda * taxaImposto;
    valorDesconto = precoVenda * descontoPadrao;

    precoFinal = precoVenda + valorImposto - valorDesconto;

    // Saida

    printf("O preco final do televisor e: R$%.2f", precoFinal);

    return 0;


}