#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct soldado
{
	char nome[20];
	int abates;
	int mortes;
	float taxaAbates;
	int partidas;
};


char menu();
soldado* novoSoldado();
void atualizaSoldado(soldado*);
void exibeSoldado(soldado*);

int main()
{
	ifstream fin;
	ofstream fout;

	soldado* entrada = new soldado{};
	char arquivo[20]{};
	char in{};




	cout << "Qual o nome do arquivo? ";
	cin >> arquivo;
	cin.get();


	fin.open(arquivo);

	if (!fin.is_open())
	{
		cout << "Arquivo não aberto. redirecionando para criação de novo arquivo...\n";
		system("pause");
		entrada = novoSoldado();
	}
	else
	{
		fin.read((char*)entrada, sizeof(soldado));
	}
	fin.close();
	fout.open(arquivo, ios_base::out | ios_base::binary | ios_base::trunc);

	while (in != 's' && in != 'S')
	{
		system("cls");
		in = menu();

		switch (in)
		{
		case 'n':
		case 'N':
			entrada = novoSoldado();
			break;
		case 'a':
		case 'A':
			atualizaSoldado(entrada);
			break;
		case 'e':
		case 'E':
			exibeSoldado(entrada);
			break;
		default:
			break;
		}
	}

	cout << "Finalizando...";
	fout.write((char*)entrada, sizeof(soldado));
	fout.close();

	delete entrada;
}


char menu()
{
	char ch;

	cout << "           Vasco da Gama\n"
		"-------------------------------\n"
		"[N]ovo soldado\n"
		"[A]tualiza soldado(com os dados da última partida)\n"
		"[E]xibe soldado(atual)\n"
		"[S]air\n"
		"[ ]\b\b";
	cin >> ch;

	return ch;
}

soldado* novoSoldado()
{
	system("cls");
	soldado* temp = new soldado{};

	cout << "Nome do soldado: ";
	cin.getline(temp->nome, 20);

	cout << "Partidas jogadas: ";
	cin >> temp->partidas;

	cout << "Abates do soldado: ";
	cin >> temp->abates;

	cout << "Mortes do soldado: ";
	cin >> temp->mortes;

	temp->taxaAbates = (float)(temp->abates / temp->mortes);
	system("pause");
	return temp;
}

void atualizaSoldado(soldado* entrada)
{
	system("cls");
	int temp;
	cout << "          Atualizando arquivo\n"
		"---------------------------------------\n"
			"Abates na partida: ";

	cin >> temp;
	entrada->abates += temp;
	cout << "Mortes na partida: ";
	cin >> temp;
	entrada->mortes += temp;

	entrada->partidas++;

	entrada->taxaAbates = (float)(entrada->abates / entrada->mortes);
	system("pause");
}

void exibeSoldado(soldado* entrada)
{
	system("cls");
	cout << "Soldado " << entrada->nome << endl;

	cout << "---------------------------------\n\n";
	cout.width(15); cout << left;
	cout << "Abates: " << entrada->abates << endl;
	
	cout.width(15);
	cout << "Mortes: " << entrada->mortes << endl;
	cout.width(15);
	cout << "taxa de Abate: " << entrada->taxaAbates << endl;
	cout.width(15);
	cout << "Total de partidas: " << entrada->partidas << endl;
	cout << "---------------------------------\n";
	system("pause");
}