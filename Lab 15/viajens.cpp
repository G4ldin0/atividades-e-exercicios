#include <iostream>
using namespace std;

struct local
{
	char nome[10];
	char pais[20];
	char continente[10];
};

istream& operator>>(istream& is, local a)
{
	is >> a.nome;
	is >> a.pais;
	is >> a.continente;
	return is;
}

int main()
{
	short quant;
	cout << "Quantos locais você deseja viajar nas próximas férias? ";
	cin >> quant;
	local* novo = new local[quant];
	cout << "Quais os locais você deseja viajar? " << endl;
	for(short i = 0; i < quant; i++)
	{
		cout << "(NOME PAIS CONTINENTE : ";
		cin >> novo[i];
	}
	
	cout << "locais escolhidos:";
	for (short i = 0; i < quant; i++)
	{
		cout << novo[i].nome;
		cout << novo[i].pais;
		cout << novo[i].continente;
		cout << " ";
	}


	delete novo;
}