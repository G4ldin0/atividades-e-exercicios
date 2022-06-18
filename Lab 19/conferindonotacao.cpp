#include <iostream>
using namespace std;

int main()
{
	int matriz[2][5]
	{
		{3, 5, 2, 7, 8},
		{0, 3, 6, 2, 1}
	};
	//assim como no exemplo anterior, foi descrita uma matriz de tamanho qualquer, e foi chamado o cout para a primeira linha da matriz
	cout << matriz[0]; //o resultado foi o mesmo do segundo exemplo da questão passada. Como esta linha representa um ponteiro, será exibido somente o nome de seu endereço de memória
}