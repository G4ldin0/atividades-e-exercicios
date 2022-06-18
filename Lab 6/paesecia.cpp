#include <iostream>
using namespace std;

//valores globais definidos
#define PAO 0.3
#define PASTEL 0.25

void main()
{
	//estética
	system("chcp 1252 >nul");

	//declaração de variáveis
	int quantPao, quantPastel;

	//input
	cout << "Quantos pães? ";
	cin >> quantPao;

	cout << "Quantos pastéis? ";
	cin >> quantPastel;

	//output
	cout << "O total das compras é R$" << quantPao * PAO + quantPastel * PASTEL;
}