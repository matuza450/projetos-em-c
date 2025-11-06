// Calculadora de Bônus Salarial
#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "");
    char categoria;

    float valorBonus = 0;

    float salarioBase;
    float salarioTotal = 0;

    int categoriaValida = 1;

    printf("Digite sua Categoria(Ex: A, B ,C): ");
    scanf("%c", &categoria);

    printf("Digite seu Salário Base:");
    scanf("%f", &salarioBase);

    switch(categoria){
        case 'A':
            if(salarioBase <= 5000.00){
                valorBonus = salarioBase * 0.10;
            } else {
                valorBonus = salarioBase * 0.07;
            }
            break;

        case 'B':
            valorBonus = 700.00;
            break;
            
        case 'C':
            if (salarioBase < 10000.00){
                valorBonus = 1500.00;
            } else {
                valorBonus = 2500.00;
            }
            break;

        default:
            printf("Erro: Categoria inválida\n");
            categoriaValida = 0;
            break;
        
    }


}