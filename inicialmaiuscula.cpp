#include <iostream>
using namespace std;

bool inicialMaiuscula(char* nome)
{
	
	bool corrige = false;		//guarda se houver alguma altera��o
	int contador = 0;			//guarda o tamanho de cada palavra


	for (int i = 0; nome[i] != '\0'; i++) //loop que passa por todos os caracteres
	{
		//faz a contagem de cada palavra
		if (nome[i] != ' ' && nome[i] != '\0') contador++; 
		else contador = 0;

		//se for a primeira letra
		if (contador <= 1)
		{	//e for minuscula e nao tiver espa�o no caracter seguinte ao pr�ximo
			if (islower(nome[i]) && nome[i+2] != ' ')
			{//converte para maiuscula e marca a corre��o
				nome[i] = toupper(nome[i]);
				corrige = true;
			}
		} else //se nao for a primeira letra
		{
			if (isupper(nome[i])) //e for maiusculo
			{//converte para minusculo e marca a corre��o
				nome[i] = tolower(nome[i]);
				corrige = true;
			}
		}
	}
	return corrige;
}

int main()
{
	char nome[40]{};

	cout << "entre com os nomes aprovados (fim para encerrar): \n";
	for (cin.getline(nome, 40); strcmp(nome, "fim"); cin.getline(nome, 40)) //loop que continua enquanto o string for diferente de "fim"
	{
		bool corrige = inicialMaiuscula(nome); //guarda o booleano e chama a fun��o
		cout.width(30); cout << left;
		cout << nome;


		cout << "<-- ";
		if (corrige) cout << "Corrigido";
		else cout << "OK";

		cout << endl;
	}
}