#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	unsigned short valores[5] = { rand() % 255, rand() % 255, rand() % 255, rand() % 255, rand() % 255}; //peguei uns valores aleatorios ai...
	unsigned short pos;

	//input
	cout << "Vetor: ";
	for (short i = 0; i < 5; i++)
	{
		cout << valores[i] << " ";
	}
	cout << "\n---------------\n";
	cout << "Alterar posição: ";
	cin >> pos;
	cout << "Novo valor: ";
	cin >> valores[abs(pos%5)]; //coloquei o valor absoluto modulo 5 pra evitar que dê problema se botar um valor maior ou menor.

	//output
	cout << "\n---------------\n";
	cout << "Vetor: ";
	for (short i = 0; i < 5; i++)
	{
		cout << valores[i] << " ";
	}
}