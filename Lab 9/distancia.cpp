#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	// variaveis
	int entrada;

	//input
	cout << "Entre com a dist�ncia em metros: ";
	cin >> entrada;

	//output
	cout << entrada << " metros equivalem a " << entrada / 1000 << " quil�metros e " << entrada % 1000 << " metros.";
	//todas as opera��es no cout para economizar mem�ria :v
}