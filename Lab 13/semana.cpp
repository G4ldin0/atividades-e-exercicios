#include <iostream>
using namespace std;

enum sem{DOM, SEG, TER, QUA, QUI, SEX, SAB};

int main()
{
	char semana[8][10] =
	{
		"Domingo", "Segunda", "Ter�a", "Quarta", "Quinta", "Sexta", "S�bado", "Domingo"
	};

	for (sem ind = DOM; ind <= SAB; ind = sem(ind + 1))
	{
		cout << semana[ind] << endl;
	}
}