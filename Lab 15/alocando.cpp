#include <iostream>
using namespace std;

int main()
{
	int* val = new int; //declara��es iniciais
	*val = 100;

	cout << "conte�do armazenado: " << *val; //output inicial

	cout << "digite o novo valor para este bloco de mem�ria: ";
	cin >> *val; //input do usu�rio (*val para defenir o valor dentro do endere�o)
	cout << *val; //mostrando o valor mais uma vez, para confirmar

	delete val; //deletando a mem�ria apontada, como pede a quest�o
}