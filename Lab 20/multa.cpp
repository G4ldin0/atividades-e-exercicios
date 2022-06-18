#include <iostream>
using namespace std;

int main()
{
	int vel[10]{};
	int somaMultas{}, somaCarros{};

	cout << "As ultimas 10 velocidades registradas: \n";
	for (char i = 0; i < 10; i++)
	{
		cin >> vel[i];
		if (vel[i] > 80)
		{	
			cout << vel[i] << " excede o limite = multa de R$" << (vel[i] - 80) * 8 << endl;
			somaCarros++;
			somaMultas += (vel[i] - 80) * 8;
		}
	}

	cout << endl << somaCarros << " carros foram multados em um valor total de R$" << somaMultas << ".";


}