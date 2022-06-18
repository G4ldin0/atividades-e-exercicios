#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	// variaveis
	int entrada;

	//input
	cout << "Entre com a distância em metros: ";
	cin >> entrada;

	//output
	cout << entrada << " metros equivalem a " << entrada / 1000 << " quilômetros e " << entrada % 1000 << " metros.";
	//todas as operações no cout para economizar memória :v
}