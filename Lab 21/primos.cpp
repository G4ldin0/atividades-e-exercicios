#include <iostream>
using namespace std;

int main()
{
	int entrada{};
	bool eprimo = true;
	cout << "Entre com um n�mero inteiro maior que 0: ";
	cin >> entrada;

	//passa do 2 at� o numero escolhido
	for (int i = 2; i < entrada; i++)
	{
		if (entrada % i != 0) eprimo = true;	//se o numero nao for divis�vel pelo contador, ent�o � primo
		else
		{
			eprimo = false;			//sen�o, n�o � primo e para o loop.
			break;
		}
	}

	//output
	if (eprimo) cout << entrada << " � primo!";
	else cout << entrada << " n�o � primo";
}