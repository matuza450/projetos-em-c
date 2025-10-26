/* 
DESENVOLVIDO POR MATHEUS HENIRQUE DE OLVEIRA SILVA
LÓGICA DE PROGRAMAÇÃO TDS
TUTOR: Lázaro Vinícius de Oliveira Lima

1- Uma empresa de energia cobra diferentes tarifas conforme o consumo mensal em kWh de uma residência, seguindo as faixas abaixo:
Consumo (kWh)	Tarifa por kWh
Até 100	R$ 0,50
De 101 até 200	R$ 0,70
Acima de 200	R$ 0,90
Faça um programa em C++ que:

    Leia o nome do cliente;

    Leia o consumo mensal de energia (em kWh);

    Calcule e exiba o valor total a pagar;

    Verifique se o consumo é negativo — neste caso, exiba uma mensagem de erro. 
*/


#include <string>
#include <iomanip> // perfeito pra formatar dinheiro! 
#include <locale.h>
#include <iostream>


using namespace std;

int main(){
	setlocale(LC_ALL, "");
	
	
	char nome[100];
	float kwhConsumo;
	float valorTotal = 0.0;
	const float tarifa1 = 0.05;
	const float tarifa2 = 0.07;
	const float tarifa3 = 0.09;
	
	cout << "Digite o nome do cliente: ";
	
	cin.getline(nome, 100); 
	
	cout << "Olá, " << nome << "! Digite o consumo mensal em kWh: ";
	cin >> kwhConsumo;
	
	
	if (kwhConsumo < 0) {
		cout << "ERRO: O consumo não pode ser negativo." << endl;
		
	} else if (kwhConsumo <= 100) {
		valorTotal = kwhConsumo * tarifa1;
	} else if (kwhConsumo <= 200) {
		valorTotal = kwhConsumo * tarifa2;
	} else {
		valorTotal = kwhConsumo * tarifa3;
	}
	
	// Só exibe o valor se o consumo for válido (maior ou igual a zero)
	if (kwhConsumo >= 0) {
		cout << fixed << setprecision(2); // perfeito pra dinheiro 		// fixed força a ixibição de decimais 
		
		cout << "---------------------------" << endl;
		cout << "Cliente: " << nome << endl;
		cout << "Consumo: " << kwhConsumo << " kWh" << endl;
		cout << "Valor total a pagar: R$ " << valorTotal << endl;
		cout << "---------------------------" << endl;
	}
	
	return 0;
	
	}