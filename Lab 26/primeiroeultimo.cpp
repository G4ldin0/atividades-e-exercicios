#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void firstname(const char origem[], char destino[])
{
	int i = 0;
	for (i; origem[i] != ' '; i++)
	{
		destino[i] = origem[i];
	}
	destino[i] = '\0';
}

void lastname(const char origem[], char destino[])
{
	int i = 0;
	int j = strlen(origem)-1;
	int conta{};
	for (j; origem[j-1] != ' '; j--) 
		++conta; //conta quantos caracteres tem no ultimo nome

	for (i, j; i <= conta; i++, j++)
	{
		destino[i] = origem[j]; //anexa os caracteres dessa posição contada até o fim
	}
	destino[i] = '\0'; //no final adiciona o \0
}

int main()
{
	char nome[50], primeiro[15], ultimo[15];

	cout << "Entre com os nomes a cadastrar ( \'.\' para encerrar): \n";
	for (cin.getline(nome, 50); strcmp(nome, "."); cin.getline(nome, 50))
	{
		firstname(nome, primeiro);
		lastname(nome, ultimo);
		cout << ultimo << ", " << primeiro << endl;
		
		primeiro[0] = '\0'; //pra evitar futuros erros
		ultimo[0] = '\0';
	}
}