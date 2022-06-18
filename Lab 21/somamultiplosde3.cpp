#include <iostream>
using namespace std;

int main()
{
	int soma{};
	for (int i = 1; i < 1000; i++)
	{
		if ((3 % i == 0 || i % 3 == 0) || (5 % i == 0 || i % 5 == 0))
			soma = soma + i;
	}

	cout << soma;
}