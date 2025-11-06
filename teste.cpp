#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

void exercicio1(){
    /*
1. Leia 3 valores inteiros (X, Y, Z), determina e escreve o menor deles.
    */

    int x,y,z;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    printf("Digite o valor de Z: ");
    scanf("%d", &z);

    int menor = x;

    if(y < menor){
        menor = y;
    }
    if(z < menor){
        menor = z;
    }
    printf("\n\n\nRESPOSTA: O menor numero entre os 3 valores é o (%d)\n\n\n", menor);

}

void exercicio2(){
    /*
Desenvolva um algoritmo que efetue a leitura de três valores para os lados de um triângulo,
considerando lados como: A, B e C. O algoritmo deverá verificar se os lados fornecidos forma
realmente um triângulo (cada lado é menor que a soma dos outros dois lados). Se for esta condição
verdadeira, deverá ser indicado qual tipo de triângulo foi formado: isósceles (dois lados iguais e um
diferente), escaleno (todos os lados diferentes) ou eqüilátero (todos os lados são iguais)
    */

    int a,b,c;

    printf("Digite o numero do valor A: ");
    scanf("%d", &a);
    printf("Digite o numero do valor B: ");
    scanf("%d", &b);
    printf("Digite o numero do valor C: ");
    scanf("%d", &c);

    // conferir os valores se fazem sentindo: 
    if (a <= 0 || b <= 0 || c <= 0){
        printf("Erro: todos os lados devem ser maiores que zero. \n\n");
        
    }

    // verificar se realmente forma um triangulo
    if (a >= b + c || b >= c + a || c >= a + b){
        printf("Os valores informados não forma um triangulo\n\n");
        
    }

    // tipos de triangulo
    if (a == b && b == c){
        printf("É equilátero\n");
    }
    if (a == b && a != c){
        printf("Isósceles\n");
    }
    if (a != b && b != c && a != c){
        printf("É escaleno\n");
    }
}

void exercicio3(){
    /*
A Secretaria de Meio Ambiente, que controla o índice de poluição, mantém 3 grupos de indústrias
que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0,05 até 0,29.
Se o índice sobe para 0,3 as indústrias do 1º grupo são intimadas a suspenderem suas atividades, se o
índice crescer para 0,4 as indústrias do 1º e 2º grupo são intimadas a suspenderem suas atividades, se
o índice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades. Faça um
programa que leia o índice de poluição
    */

    float indicePoluicao;

    printf("Digite o índice de Poluíção: \n");
    scanf("%f", &indicePoluicao);

    if (indicePoluicao >= 0.5) {
        printf("Notificação: Todos os 3 grupos devem suspender as atividades.\n");

    } else if (indicePoluicao >= 0.4){
        printf("Notificação: Indústrias do 1° e 2° grupo devem suspender as atividades. \n");

    } else if (indicePoluicao >= 0.3) {
        printf("Noificação: Indústrias do 1° grupo devem suspender as atividades. \n");
    } else if (indicePoluicao >= 0.05) {
        printf("Situação: Índice de poluição está em nível aceitável. \n");

    } else {
        printf("Situação: Índice abaixo do nível de monitoramento. \n");

    }

    return;

}

void exercicio4(){

    /*
Um Banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último
ano. Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo
com a tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito.

Saldo médio                     Percentual
de 0 a 200,00               nenhum crédito (crédito = 0)
de 201,00 a 400,00          20% do valor do saldo médio
de 401,00 a 600,00          30% do valor do saldo médio
acima de 600,00             40% do valor do saldo médio
    */

    float saldoMedio;

    float valorCredito = 0;
    float percentual = 0;

    printf("Digite seu saldo Médio: \n");
    scanf("%f", &saldoMedio);

    if (saldoMedio >= 0 && saldoMedio <= 200.00){
        valorCredito = 0.0;
        percentual = 0.0;

    } else if (saldoMedio <= 400.00){
        valorCredito = saldoMedio * 0.20;
        percentual = 20.0;
    } else if (saldoMedio <= 600.00){
        valorCredito = saldoMedio * 0.30;
        percentual = 30.0;
    } else {
        valorCredito = saldoMedio * 0.40;
        percentual = 40.0;
    }

    printf("Saldo Médio Informado: R$ %.2f", saldoMedio);

    if (valorCredito == 0){
        printf("Nenhum crédito disponível para esta faixa de saldo\n");
    } else {
        printf("Percentual aplicado: %.0f%%\n", percentual);
        printf("Valor do Crédito Aprovado: R$ %.2f\n", valorCredito);
    }
}


int main(){
    
    int opcao;
    
    

    setlocale(LC_ALL, "");

    do {
        printf("\n\n---- MENU DE EXERCÍCIO C ---\n");
        printf("Escolha um exercício para executar:\n");
        printf("1 - Exercício 01\n"); 
        printf("2 - Exercício 02\n");
        printf("3 - Exercício 03\n");
        printf("4 - Exercício 04\n");
        printf("0 - Sair\n");         
        printf("Digite sua opção: ");


        scanf("%d", &opcao);


        switch (opcao)
        {

            case 1:
                exercicio1(); 
                break;
            

            case 2:
                exercicio2();
                break;

            case 3:
                exercicio3();
                break;

            case 4:
                exercicio4();
                break;

            case 0: 
                printf("Saindo do programa...\n");
                break;
        
            default: 
                printf("Opção inválida! Tente novamente.\n");
                break;
        }


    } while (opcao != 0); 
    
    
    return 0;
}