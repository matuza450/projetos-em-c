#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exercicio1()
{
    printf("\n----Exercício 01: Faça um programa em “C” que leia dois números e exiba qual é o maior. \n");
    int a, b;

    printf("\nDigite um número: ");
    scanf("%d", a);

    printf("\nDigite outro número: ");
    scanf("%d", b);

    if (a > b)
    {
        printf("\nO numero A(%d) é maior que o numero B(%d)", a, b);
    }
    else
    {
        printf("\n O numero B(%d) é maior que o número A(%d)", a, b);
    }
}

void exercicio2()
{
    printf("\n----Exercício 02: Faça um programa em “C” que leia a altura de duas pessoas (A e B) e verifique qual é a maior e exiba com uma mensagem qualquer qual é o maior. Ex: “A é maior que B”\n");
    
    float a, b;
    float altura;

    printf("\nDigite sua altura (PESSOA A): ");
    scanf("%f", a);

    printf("\nDigite sua altura (PESSSOA B): ");

    if (a>b) {
        printf("\nA altura da pessoa A é maior que a altura da pessoa B");
    } else {
        printf("\nA altura da pessoa B é maior que a altura da pessoa A");
    }

}

void exercicio3()
{
    printf("\n----Exercício 03: Faça um programa em “C” que permita o usuário digitar o número do mês escolhido e exiba o mês por extenso. ");

    int numero;

    printf("Digite o mes:");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("Janeiro\n");
    case 2:
        printf("Fevereiro\n");
    case 3:
        printf("Março\n");
    case 4:
        printf("Abril\n");
    case 5:
        printf("Maio\n");
    case 6:
        printf("Junho\n");
    case 7:
        printf("Julho\n");
    case 8:
        printf("Agosto\n");
    case 9:
        printf("Setembro\n");
    case 10:
        printf("Outubro\n");
    case 11:
        printf("Novembro\n");
    case 12:
        printf("Dezembro\n");
    }
}

void exercicio4()
{
    printf("\n---Exercício 04: Faça um programa em “C” que permita a entrada de um número qualquer e exiba se este número é par ou ímpar. Se for par exiba também a raiz quadrada do mesmo; se for ímpar exiba o número elevado ao quadrado. ");
    printf("Digite 4 para entrar na atividade: ");
}

void exercicio5()
{
    printf("\n---Exercício 05: Faça um programa em “C” que leia os lados de um triângulo retângulo e exiba sua hipotenusa. Se a hipotenusa for maior que 100 escreva, hipotenusa muito grande, caso contrário exiba hipotenusa pequena. ");
}

void exercicio6(){
    printf("NAO FOI FEITO");
}
main()
{
    setlocale(LC_ALL, "");
    int opcao;

    do
    {

        printf("\n\n---- MENU DE EXERCÍCIO C ---\n");
        printf("Escolha um exercício para executar:\n");
        printf("\n----Exercício 01 - Faça um programa em “C” que leia dois números e exiba qual é o maior. \n");
        printf("\n----Exercício 02: Faça um programa em “C” que leia a altura de duas pessoas (A e B) e verifique qual é a maior e exiba com uma mensagem qualquer qual é o maior. Ex: “A é maior que B”\n");
        printf("\n----Exercício 03: Faça um programa em “C” que permita o usuário digitar o número do mês escolhido e exiba o mês por extenso. ");
        printf("\n---Exercício 04: Faça um programa em “C” que permita a entrada de um número qualquer e exiba se este número é par ou ímpar. Se for par exiba também a raiz quadrada do mesmo; se for ímpar exiba o número elevado ao quadrado. ");
        printf("\n---Exercício 05: Faça um programa em “C” que leia os lados de um triângulo retângulo e exiba sua hipotenusa. Se a hipotenusa for maior que 100 escreva, hipotenusa muito grande, caso contrário exiba hipotenusa pequena. ");

        printf("0 - Sair do programa\n");
        printf("------------------------------\n");
        printf("Digite sua opcao: ");

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

        case 5:
            exercicio5();
            break;

        case 6:
            exercicio6();
            break;

        case 0:
            printf("\nSaindo do Programa. Até mais!\n");
            break;
        }

        if (opcao != 0)
        {
            printf("\nPressione Enter para voltar o menu: ");

            while (getchar() != '\n')
                ;
            getchar();
        }

    } while (opcao != 0);

    return 0;
}