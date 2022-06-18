#include <iostream>	
using namespace std;

double equacao(double vet[])
{
	return vet[0] * (vet[2] - vet[1]);
}

int main()
{
	double vet[3];
	cout << "Entre com os três valores: ";
	cin >> vet[0] >> vet[1] >> vet[2];

	cout << "Equação resolvida: " << equacao(vet);
}