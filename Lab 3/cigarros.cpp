#include <iostream>
using namespace std;

void main()
{
	system("chcp 1252 > nul");

	// declara��o de vari�veis
	float anos, cigarros, pre�o, total;

	
	//inputs com os valores
	cout << "A quantos anos voc� fuma? ";
	cin >> anos;
	cout << endl;

	cout << "Quantos cigarros voc� fuma por dia? ";
	cin >> cigarros;
	cout << endl;

	cout << "Qual o pre�o m�dio de uma carteira de cigarros? ";
	cin >> pre�o;
	cout << endl;


	//calculo do valor total
	total = (anos * 365)/(20/cigarros)*pre�o;


	//output do valor total
	cout << "Voc� gastou, em m�dia, at� hoje, R$" << total << " com cigarros";
}