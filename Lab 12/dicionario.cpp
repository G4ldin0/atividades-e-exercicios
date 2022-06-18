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

palavra ler() //fun��o pra ler as etapas do registro
{
	palavra temp;
	cout << "Palavra em portugu�s: ";
	cin >> temp.port;
	cout << "Palavra em ingl�s: ";
	cin >> temp.ingl;
	cout << "Palavra em espanhol: ";
	cin >> temp.esp;
	return temp;
}

void exibir(palavra a) //fu���o pra ver as etapas do registro
{
	cout << a.port << " " << a.ingl << " " << a.esp << "\n";
}

int main()
{
	system("chcp 1252 > nul");
	palavra dicionario[3] = { {"tubar�o", "shark", "tibur�n"}, {"rapadura", "brown sugar", "az�car morena"}}; //duas palavras aleatorias
	cout << "Nova entrada no dicion�rio: \n";
	dicionario[2] = ler();
	for (short i = 0; i < 3; i++) //for loop pra exibir todas as entradas do dicionario
	{
		exibir(dicionario[i]);
	}

}