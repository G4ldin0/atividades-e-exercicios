#include <iostream>
using namespace std;

void main()
{
	int custo;

	cout << "Qual o custo de produ��o do carro? ";
	cin >> custo;

	cout << "O custo do consumidor � de R$" << custo + (custo * 0.28) + (custo * 0.45);
}