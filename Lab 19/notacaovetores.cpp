#include <iostream>
using namespace std;

int main()
{
	int mat[2][3] =
	{
		{1, 2, 3},
		{4, 5, 6}
	};

	cout << mat[0][0]; //como o valor em 0,0 � um int, o cout exibe o n�mero (no caso, o primeiro)
	cout << endl;

	cout << mat[0]; //como isto � o equivalente a um ponteiro, ele mostra o endere�o para a primeira linha
	cout << endl;

	cout << &mat[0][0]; //aqui � a nota��o de ponteiro levada mais a risca, onde se pega o endere�o de mem�ria do proprio valor inteiro(no caso, o primeiro da linha)
	cout << endl;

}