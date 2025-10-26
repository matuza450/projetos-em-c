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
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF-8");
    // VARIÁVEIS DE ENTRADA
    char colaborador[100];
    float salarioBruto;
    // CONSTANTES DO INSS (TABELA 1)
    const float INSS_ALIQUOTA_1 = 0.075;
    const float INSS_ALIQUOTA_2 = 0.090;
    const float INSS_ALIQUOTA_3 = 0.12;
    const float INSS_ALIQUOTA_4 = 0.14;
    const float INSS_TETO = 7507.49;

    // VARIÁVEIS DE CÁLCULO
    float descontoINSS = 0.0;
    float baseCalculoIR = 0.0;
    float descontoIR = 0.0;
    float salarioLiquido = 0.0;

    // CONSTANTE DO IR (TABELA 2)
    /*
    A tabela do IR tem "parcelas a deduzir" no mundo real,
    mas o exercício não as forneceu. Vamos seguir SÓ as alíquotas
    */
    const float IR_ALIQUOTA_1 = 0.0;
    const float IR_ALIQUOTA_2 = 0.075;
    const float IR_ALIQUOTA_3 = 0.15;
    const float IR_ALIQUOTA_4 = 0.225;
    const float IR_ALIQUOTA_5 = 0.275;

    cout << "Digite o nome do colaborador: ";
    cin.getline(colaborador, 100);

    cout << "Olá Sr(a), " << colaborador << "!, Digite seu Salário de Contribuição: ";
    cin >> salarioBruto;
    cout << "-----------------------------------" << endl;

    if (salarioBruto <= 1320.00)
    {
        descontoINSS = salarioBruto * INSS_ALIQUOTA_1;
    }
    else if (salarioBruto <= 2571.91)
    {
        descontoINSS = salarioBruto * INSS_ALIQUOTA_2;
    }
    else if (salarioBruto <= 3856.94)
    {
        descontoINSS = salarioBruto * INSS_ALIQUOTA_3;
    }
    else if (salarioBruto <= INSS_TETO)
    {
        descontoINSS = salarioBruto * INSS_ALIQUOTA_4;
    }
    else
    {
        descontoINSS = INSS_TETO * INSS_ALIQUOTA_4;
    }

    // Calcular Base de Cáculo de IR
    // O IR é calculado sobre o salário bruto MENOS o desconto do INSS
    baseCalculoIR = salarioBruto - descontoINSS;

    if (baseCalculoIR <= 1903.98)
    {
        descontoIR = baseCalculoIR * IR_ALIQUOTA_1;
    }
    else if (baseCalculoIR <= 2826.65)
    {
        descontoIR = baseCalculoIR * IR_ALIQUOTA_2;
    }
    else if (baseCalculoIR <= 3751.05)
    {
        descontoIR = baseCalculoIR * IR_ALIQUOTA_3;
    }
    else if (baseCalculoIR <= 4664.68)
    {
        descontoIR = baseCalculoIR * IR_ALIQUOTA_4;
    }
    else
    {
        descontoINSS = baseCalculoIR * IR_ALIQUOTA_5;
    }

    salarioLiquido = salarioBruto - descontoINSS - descontoIR;

    cout << fixed << setprecision(2);

    cout << "Relatório de Pagamento: " << colaborador << endl;
    cout << "Salário Bruto: \t\t R$ " << salarioBruto << endl;
    cout << "---------------------------------" << endl;
    cout << "(-) Desconto INSS: \t R$ " << descontoINSS  << endl;
    cout << "Base de Cálculo do Imposto de Renda(IR): \t R$ " << baseCalculoIR << endl;
    cout << "(-) Desconto Imposto de Renda(IR): \t R$ " << descontoIR << endl;
    cout << "Salário Líquido: \t R$ " << salarioLiquido << endl;

    return 0;


}