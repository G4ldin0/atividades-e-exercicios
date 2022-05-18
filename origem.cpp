#include <iostream>
using namespace std;

void absoluto()
{
	int n, outron;
	cout << "Digite um valor positivo ou negativo: ";
	cin >> n;
	cout << endl;

	if (n >= 0) cout << "o valor absoluto de " << n << " é " << n;
	else cout << "o valor absoluto de " << n << " é " << -n;
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	absoluto();
}