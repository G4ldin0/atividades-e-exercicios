#include <iostream>
using namespace std;

void main()
{
	//variavel de input
	int n;

	//input
	cout << "Digite um valor: ";
	cin >> n;
	cout << endl;

	cout << "Tabuada do " << n << endl;
	cout << "-------------" << endl << endl;

	//loop para as respostas

	for (int i = 1; i < 11; i++)
	{
		cout << n << " X " << i << " = " << n * i << endl;
	}
}