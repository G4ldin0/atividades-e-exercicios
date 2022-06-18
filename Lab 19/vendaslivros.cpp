#include <iostream>
using namespace std;

int main()
{

	system("chcp 1252 > nul");

	int vendas[3][12]{}; //variavel que guarda o valor das vendas
	int totalvendas[3]{}; //variavel que guarda o valor total de vendas em cada ano

	const char* meses[12] = //nomes dos meses
	{
		"Janeiro",
		"Fevereiro",
		"Março",
		"Abril",
		"Maio",
		"Junho",
		"Julho",
		"Agosto",
		"Setembro",
		"Outubro",
		"Novembro",
		"Dezembro"
	};

	for (char i = 0; i < 3; i++)
	{
		cout << "Digite o número de livros vendidos no " << i + 1 << "° ano: " << endl;
		for (char j = 0; j < 12; j++)
		{
			cout << meses[j] << ": ";
			cin >> vendas[i][j]; //guarda o tanto do mês
			totalvendas[i] += vendas[i][j]; //soma o valor ao total do ano
		}
		cout << endl;
	}

	cout << "Total de vendas: " << endl;
	for (char i = 0; i < 3; i++) cout << i + 1 << "° ano: " << totalvendas[i] << endl;


	cout << "No total, foram vendidos " << totalvendas[0] + totalvendas[1] + totalvendas[2] << " livros.";

}

// 10 10 10 10 10 10 10 10 10 10 10 10 5 5 5 5 5 5 5 5 5 5 5 5 20 20 20 20 20 20 20 20 20 20 20 20