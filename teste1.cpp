#include <stdio.h>


int main(){


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

    return 0;

}