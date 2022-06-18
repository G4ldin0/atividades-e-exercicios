#include <iostream>
using namespace std;

int main()
{
	short idades[32]{}; //vetor que guarda as variaveis
	char maiores{}; //contador para maiores de idade;
	char i = 0; //contador pro while

	cout << "Digite as idades do grupo: \n";

	do
	{
		cin >> idades[i];
	} while (idades[i++] > 0 && i < 32); //condicional / contador só aumenta apos a condição


	for (char j = 0; idades[j] != 0; j++) if (idades[j] >= 18) maiores++; //aumenta o contador de maiores de idade

	cout << "Neste grupo existem " << (int) maiores << " maiores de idade.";

}