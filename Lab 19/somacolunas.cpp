#include <iostream>
using namespace std;

int main()
{
	int mat[4][4]
	{
		{3, 1, 5, 5},
		{1, 5, 5, 6},
		{2, 3, 4, 5},
		{4, 9, 1, 8}
	};
	int soma[4]{};

	for (char i = 0; i < 4; i++)
	{
		for (char j = 0; j < 4; j++) //passa em cada linha, e vai somando o valor do endereço na variavel de soma
		{
			soma[j] += mat[i][j];
		}
	}
	cout << "A soma das colunas é: " << soma[0] << " " << soma[1] << " " << soma[2] << " " << soma[3];
}