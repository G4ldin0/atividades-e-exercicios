#include <iostream>
using namespace std;

int main()
{
	int dist{};
	float preco{};

	cout << "Qual a dist�ncia (Km) da viagem?\n";
	cin >> dist;

	if (dist < 200) preco = dist * 0.5;
	else if (dist < 400) preco = dist * 0.4;
	else preco = dist * 0.3;

	cout << "O pre�o da viagem � R$" << preco << "!\n";
}