#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void firstname(char origem[], char destino[])
{
	int i = 0;
	for (i; origem[i] != ' '; i++)
	{
		destino[i] = origem[i];
	}
	destino[i] = '\0';
}

void lastname(char origem[], char destino[])
{
	int i = strlen(origem)- 1;
	int j = 0;

	for (i; origem[i] != ' '; i--)
	{
		destino[strlen(origem) - i] = origem[i];

	}
	destino[strlen(origem)-i + 1] = '\0';
}

int main()
{
	char nome[50], primeiro[50], ultimo[50];

	cout << "Entre com o nome: ";
	cin.getline(nome, 50);
	firstname(nome, primeiro);
	cout << primeiro;

	cout << ", ";

	lastname(nome, ultimo);
	cout << ultimo;
}