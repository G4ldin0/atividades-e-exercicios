#include <iostream>
using namespace std;

int main()
{
	int* val = new int; //declarações iniciais
	*val = 100;

	cout << "conteúdo armazenado: " << *val; //output inicial

	cout << "digite o novo valor para este bloco de memória: ";
	cin >> *val; //input do usuário (*val para defenir o valor dentro do endereço)
	cout << *val; //mostrando o valor mais uma vez, para confirmar

	delete val; //deletando a memória apontada, como pede a questão
}