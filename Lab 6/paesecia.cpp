#include <iostream>
using namespace std;

//valores globais definidos
#define PAO 0.3
#define PASTEL 0.25

void main()
{
	//est�tica
	system("chcp 1252 >nul");

	//declara��o de vari�veis
	int quantPao, quantPastel;

	//input
	cout << "Quantos p�es? ";
	cin >> quantPao;

	cout << "Quantos past�is? ";
	cin >> quantPastel;

	//output
	cout << "O total das compras � R$" << quantPao * PAO + quantPastel * PASTEL;
}