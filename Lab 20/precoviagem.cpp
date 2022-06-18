#include <iostream>
using namespace std;

int main()
{
	int dist{};
	float preco{};

	cout << "Qual a distância (Km) da viagem?\n";
	cin >> dist;

	if (dist < 200) preco = dist * 0.5;
	else if (dist < 400) preco = dist * 0.4;
	else preco = dist * 0.3;

	cout << "O preço da viagem é R$" << preco << "!\n";
}