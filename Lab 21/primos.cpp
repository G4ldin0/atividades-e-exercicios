#include <iostream>
using namespace std;

int main()
{
	int entrada{};
	bool eprimo = true;
	cout << "Entre com um número inteiro maior que 0: ";
	cin >> entrada;

	//passa do 2 até o numero escolhido
	for (int i = 2; i < entrada; i++)
	{
		if (entrada % i != 0) eprimo = true;	//se o numero nao for divisível pelo contador, então é primo
		else
		{
			eprimo = false;			//senão, não é primo e para o loop.
			break;
		}
	}

	//output
	if (eprimo) cout << entrada << " é primo!";
	else cout << entrada << " não é primo";
}