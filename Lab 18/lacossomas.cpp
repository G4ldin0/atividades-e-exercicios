#include <iostream>
using namespace std;


//decidi usar três funções, uma pra cada tipo
int somaFor()
{
	int temp{};
	for (short i = 1; i <= 100; i += 2)
		temp += i;
	return temp;
}

int somaWhile()
{
	int temp{};
	char i = 1;
	while (i <= 100)
	{
		temp += i;
		i += 2;
	}
	return temp;
}

int somaDowhile()
{
	int temp{};
	int i = 1;
	do
	{
		temp += i;
		i += 2;
	} while (i <= 100);
	return temp;
}



int main()
{
	int soma{};
	
	short escolha{}; // usei um switch pra apresentar os três métodos

	cout << "Escolha método (0 = For / 1 = While / 2 = Do While): ";
	cin >> escolha;
	
	switch (escolha)
	{
	case 0:
		cout << (soma = somaFor());
		break;
	case 1:
		cout << (soma = somaWhile());
		break;
	case 2:
		cout << (soma = somaDowhile());
		break;
	}
}