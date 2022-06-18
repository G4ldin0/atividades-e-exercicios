#include <iostream>
using namespace std;

void main()
{
	system("chcp 1252 > nul");

	//declaração de variaveis
	float peso, corrida, ciclismo, natacao, calorias;

	//inputs
	cout << "Qual o seu peso (em quilos)? ";
	cin >> peso;

	cout << "Digite o seu tempo em minutos de corrida: ";
	cin >> corrida;

	cout << "Digite o seu tempo em minutos de ciclismo: ";
	cin >> ciclismo;

	cout << "Digite o seu tempo em minutos de natação:"; 
	cin >> natacao;


	//calculo
	calorias = (7 * peso * (corrida / 60)) + (7 * peso * (ciclismo / 60)) + (8 * peso * (natacao / 60));


	//output
	cout << "Você gastou um total de " << calorias << " calorias";

}