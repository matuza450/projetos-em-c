// Calculo da média de dois numeros
// Desenvolvido por Matheus Henrique
// Data de criação: 28/09/2025


#include <stdio.h>

int main(){

    float num1, num2, media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    media = (num1 + num2)/2;

    printf("A media dos dois numero e: %2.f", media);


    return 0;
}