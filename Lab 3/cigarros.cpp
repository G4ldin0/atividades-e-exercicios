#include <iostream>
using namespace std;

void main()
{
	system("chcp 1252 > nul");

	// declaração de variáveis
	float anos, cigarros, preço, total;

	
	//inputs com os valores
	cout << "A quantos anos você fuma? ";
	cin >> anos;
	cout << endl;

	cout << "Quantos cigarros você fuma por dia? ";
	cin >> cigarros;
	cout << endl;

	cout << "Qual o preço médio de uma carteira de cigarros? ";
	cin >> preço;
	cout << endl;


	//calculo do valor total
	total = (anos * 365)/(20/cigarros)*preço;


	//output do valor total
	cout << "Você gastou, em média, até hoje, R$" << total << " com cigarros";
}