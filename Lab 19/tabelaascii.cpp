#include <iostream>
using namespace std;

int main()
{
	//variaveis

	setlocale(LC_ALL, "portuguese");

	unsigned char ascii[16][16]{}; //caracteres

	int de[2]{}; //entradas do usuario
	int ate[2]{};



	//preenchimento do vetor de caracteres
	for (char i = 0; i < 16; i++)
	{
		for (char j = 0; j < 16; j++)
		{
			ascii[j][i] = 16*i + j;
		}
	}

	//entrada do usuário
	cout << "Entre com as coordenadas da região de interesse\n";
	cout << "De: ";
	cin >> de[0]; cin.get(); cin >> de[1];

	cout << "Até: ";
	cin >> ate[0]; cin.get(); cin >> ate[1];

	//
	int linhas = ate[0] - de[0] + 1;
	int colunas = ate[1] - de[1] + 1;
	char* guardar = new char[linhas * colunas]{};


	for (char i = 0; i < colunas; i++) //passa por todas as colunas
	{
		for (char j = 0; j < linhas; j++) //passa por todas as linhas
		{
			*(guardar + (colunas * j) + i) = ascii[j + de[0]][i + de[1]]; //pega o endereço do vetor dinamico e guarda o valor equivalente da tabela ASCII
		}
	}


	for (char i = 0; i < linhas; i++)
	{
		for (char j = 0; j < colunas; j++)
		{
			cout << *(guardar + (colunas * i) + j) << " ";
		}
		cout << endl;
	}



	
	/*
	for (char i = 0; i < ate[1] - de[1]; i++)
	{
		for (char j = 0; j < ate[0] - de[0]; j++)
		{
			cout << *(*(guardar+i)+j) << " ";
		}
		cout << endl;
	}*/

	/*
	for (char i = 0; i < ate[1] - de[1]; i++)
	{
		for (char j = 0; j < ate[0] - de[0]; j++)
		{
			cout << guardar[i][j] << " ";
		}
		cout << endl;
	}


	for (char i = -(abs(ate[1] - de[1])); i != 0; i++)
	{
		for (char j = -(abs(ate[0] - de[0])); j != 0; j++)
		{
			cout.width(3);
			cout << (int)ascii[i + abs(ate[1]-de[1]) + de[1]][j + abs(ate[0] - de[0]) + de[0]] << " ";
		}
		cout << endl;
	}
	*/



	/*
	* 
	* 




	//criação de um vetor dinâmico
	char** interesse = new char* [ate[0] - de[0]]{};
	for (char i = 0; i < ate[1]-de[1]; i++) interesse[i] = new char[ate[1] - de[1]];

	//definição dos caracteres dentro do vetor dinâmico
	for (char i = de[0]; i < ate[0]; i++)
	{
		for (char j = de[1]; j < ate[1]; j++)
			//interesse[de[0] - i][de[1] - j] = ascii[i][j];
			*(*(interesse + (de[0] - i)) + de[1] - j) = *(*(ascii + i) + j);
	}

	//exibição dos caracteres
	for (char i = 0; i < ate[0] - de[0]; i++)
	{
		for (char j = 0; j < ate[1] - de[1]; j++)
			cout << interesse[i][j] << " ";

		cout << endl;
	}


	*/

}