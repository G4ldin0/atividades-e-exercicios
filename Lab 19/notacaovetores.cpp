#include <iostream>
using namespace std;

int main()
{
	int mat[2][3] =
	{
		{1, 2, 3},
		{4, 5, 6}
	};

	cout << mat[0][0]; //como o valor em 0,0 é um int, o cout exibe o número (no caso, o primeiro)
	cout << endl;

	cout << mat[0]; //como isto é o equivalente a um ponteiro, ele mostra o endereço para a primeira linha
	cout << endl;

	cout << &mat[0][0]; //aqui é a notação de ponteiro levada mais a risca, onde se pega o endereço de memória do proprio valor inteiro(no caso, o primeiro da linha)
	cout << endl;

}