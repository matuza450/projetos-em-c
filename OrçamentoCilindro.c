// DESENVOLVIDO POR MATHEUS HENRIQUE - NOME DA DISCIPLINA: Lógica de Programação 1 - IFB
// Criado em 17/10/2025


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float altura, raio, areaCilindro, qtdadeLitros, qtdadeLatas, custo;
    
    printf("\nDigite o valor da altura em metros: ");
    scanf("%f", &altura);
    printf("\nDigite o valor em raio em metros: ");
    scanf("%f", &raio);
    
    areaCilindro = 2 * 3.14 * raio * raio + 2 * 3.14 * raio * altura;
    
    qtdadeLitros = areaCilindro/3;
    printf("\nA quantidade de litros necessaria é de %.2f", qtdadeLitros);
    qtdadeLatas = qtdadeLitros/5;
    printf("\nA quantidade de latas necessaria é de %.2f", qtdadeLatas);
   
    custo = qtdadeLatas * 20;
    printf("\nO valor total das tintas é de R$%.2f \n", custo);
    
    return 0;
}
   
   
    