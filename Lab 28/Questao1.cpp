#include <iostream>
using namespace std;

float TempoDaVolta(float tempo)
{
	static float acumulo;
	return acumulo += tempo;
}

int main()
{
	float entrada{};

	cout << "Volta: ";
	 while (cin >> entrada)
	{
		cout << "Tempo total = " << TempoDaVolta(entrada) << " segs\n";
		cout << "Volta: ";
	}
}