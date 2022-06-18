#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct palavra //registro palavra
{
	string port;
	string ingl;
	string esp;
};

palavra ler() //função pra ler as etapas do registro
{
	palavra temp;
	cout << "Palavra em português: ";
	cin >> temp.port;
	cout << "Palavra em inglês: ";
	cin >> temp.ingl;
	cout << "Palavra em espanhol: ";
	cin >> temp.esp;
	return temp;
}

void exibir(palavra a) //fuñção pra ver as etapas do registro
{
	cout << a.port << " " << a.ingl << " " << a.esp << "\n";
}

int main()
{
	system("chcp 1252 > nul");
	palavra dicionario[3] = { {"tubarão", "shark", "tiburón"}, {"rapadura", "brown sugar", "azúcar morena"}}; //duas palavras aleatorias
	cout << "Nova entrada no dicionário: \n";
	dicionario[2] = ler();
	for (short i = 0; i < 3; i++) //for loop pra exibir todas as entradas do dicionario
	{
		exibir(dicionario[i]);
	}

}