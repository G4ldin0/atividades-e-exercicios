#include <iostream>
#include <string>
using namespace std;

enum estado {vazia = 0, cheia};

struct tigela
{
	bool quant;
	string alimento;
};

void fome(tigela* a) { a->quant = 0; a->alimento = "nada"; }

int main()
{
	tigela completa = { cheia, "sopa"};

	cout << "Antes da janta: (cheia[1] / vazia[0]) = " << completa.quant << " O que ha dentro: " << completa.alimento;
	cout << endl;
	fome(&completa);
	cout << "Depois depois da janta: (cheia[1] / vazia[0]) = " << completa.quant << " O que ha dentro: " << completa.alimento;
	cout << endl;
}