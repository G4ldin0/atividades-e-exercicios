#include <iostream>
using namespace std;

int frequencia(int comeco[], int fim[], int mira)
{
	int contador{};

	for (int* i = comeco; i < fim; i++)
	{
		if (*i == mira)
			contador++;
	}

	return contador;

}

int main()
{
	int vet[11] = {0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0};

	cout << "Existem " << frequencia(vet, vet+11, 0) << " zeros e " << frequencia(vet, vet+11, 1) << " uns na faixa indicada.";
}