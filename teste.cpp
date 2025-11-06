#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função do exercício 1
void exercicio1(){
    // ERRO 1 (Corrigido): Faltava o ; no printf
    printf("\n---- Executando Exercício 1 ----\n");
    printf("Testes de acentuação: tésésés Á\n");
    printf("--------------------------------\n");
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