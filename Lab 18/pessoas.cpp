#include <iostream>
using namespace std;

struct pessoa
{
	char nome[32]; //deixei um numero alto o suficiente, mas finito
	int idade;
	bool sexo;
};

int main()
{
	pessoa vet[32]{}; //vetor grande o suficiente mas finito
	unsigned short soma{};


	cout << "Digite os dados das pessoas: ";
	char i = 0;
	for (i; strcmp(vet[i-1].nome, "fim"); i++) //usei como condicional a função strcmp()
	{

		cout << "Nome: ";
		cin.get();
		cin.getline(vet[i].nome, 32); //nome
		cout << "Idade: ";
		cin >> vet[i].idade; // idade
		cout << "Sexo(masc = 0 / fem = 1): ";
		cin >> vet[i].sexo; //sexo
		cout << endl;
	}

	for (char j = 0; j < i-1; j++) soma += vet[j].idade; //usando como base o valor de i, pega o endereço do vetor e soma a idade
	
	cout << "A média de idades do grupo é" << soma / (i - 1) <<"."; //output com a media ja inclusa

}