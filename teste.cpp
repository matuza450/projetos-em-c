#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


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
    if (a <= 0){
        printf("Erro: Comprimento negativo ou zero / não faz sentindo. ");
    } if (b <= 0){
        printf("Erro: Comprimento negativo ou zero / não faz sentindo. ");
    } if (c <= 0){
        printf("Erro: Comprimento negativo ou zero / não faz sentindo. ");
    }

    // tipos de triangulo
    if (a == b && b == c){
        printf("É equilátero");
    }
    if (a == b && a != c){
        printf("Isósceles");
    }
    if (a != b && b != c && a != c){
        printf("É escaleno");
    }
}




int main(){
    int opcao;
    

    setlocale(LC_ALL, "");

    do {
        printf("\n\n---- MENU DE EXERCÍCIO C ---\n");
        printf("Escolha um exercício para executar:\n");
        printf("1 - Exercício 01\n"); 
        printf("0 - Sair\n");         
        printf("Digite sua opção: ");


        scanf("%d", &opcao);


        switch (opcao)
        {

            case 1:
                exercicio1(); 
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