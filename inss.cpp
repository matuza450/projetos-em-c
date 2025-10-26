/*
MATERIA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - ENGENHARIA DE SOFTWARE
Criação 26/10/2025
UNIDADE 2: Estrutura de Decisão Condicional
ATIVIDADE PROPOSTA (pagina 2):

    A instituição de ensino que você trabalha está atualmente
em meio a um esforço para melhorar suas operações, e lançou o seguinte
desafio para você: criar um programa em linguagem C que determine o 
salário líquido de cada colaborador, considerando as deduções do INSS e 
Imposto de Renda conforme especificado nas Tabelas 1 e 2 a seguir. 
Como parte do processo de documentação, ao concluir a compilação do programa,
você deve gerar um relatório que inclua o código-fonte. 

*/


#include <string>
#include <iomanip>
#include <locale.h>
#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    // VARIÁVEIS DE ENTRADA
    char colaborador[100];
    float salarioBruto;
    // CONSTANTES DO INSS (TABELA 1)
    const float INSS_ALIQUOTA_1 = 0.075;
    const float INSS_ALIQUOTA_2 = 0.090;
    const float INSS_ALIQUOTA_3 = 0.012;
    const float INSS_ALIQUOTA_4 = 0.014;

    // CONSTANTE DO IR (TABELA 2)
    /*
    A tabela do IR tem "parcelas a deduzir" no mundo real,
    mas o exercício não as forneceu. Vamos seguir SÓ as alíquotas
    */
   const float IR_ALIQUOTA_1 = 0.0;
   const float IR_ALIQUOTA_2 = 0.075;
   const float IR_ALIQUOTA_3 = 0.15;
   consT float AR_ALIQUOTA_4 = 
    
    float contribuicaoSalario;
    float valorTotal = 0.0;

    cout << "Digite o nome do colaborador: ";
    cin.getline(colaborador, 100);

    cout << "Olá Sr(a), " << colaborador << "!, Digite seu Salário de Contribuição: ";
    cin >> contribuicaoSalario;

    if (contribuicaoSalario <= 1320.00) {
        valorTotal = contribuicaoSalario * inss1;
    } else if (contribuicaoSalario > 1320.01 <= 2571.91 ){
        valorTotal = contribuicaoSalario * inss2;
    } else if (contribuicaoSalario > 2571.30 <= 3856.94) {
        valorTotal = contribuicaoSalario * inss3;
    } else (contribuicaoSalario > 3856.95 <= 7507.49) {
        valorTotal = contribuicaoSalario * inss4;
    }


}