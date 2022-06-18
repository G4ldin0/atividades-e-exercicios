#include <iostream>
using namespace std;

int main()
{
	long long soma{};

	//decidi fazer um loop for com todas as informações dentro
	for (
		long long ultimo_termo = 1, penultimo_termo = 2, termo = 3; //variaveis

		termo < 4000000; //condicional

		termo = ultimo_termo + penultimo_termo, //incrementos
		ultimo_termo = penultimo_termo, 
		penultimo_termo = termo
		)

	{
		if (termo % 2 == 0) //teste pra saber se é par
		{
			cout << termo << endl;
			soma += termo;
		}
	}

	cout << "A soma de todos os pares da sequencia de fibonacci ate o 4M é " << soma;
}