#include <iostream>
using namespace std;

int main()
{
	double valor = 245.795;
	int inteiro = int(valor);

	cout << "double x 100: " << valor * 100 << endl; //o valor original foi preservado, e multiplicado normalmente. Valor correto.
	cout << "int x 100: " << inteiro * 100 << endl; // como na convers�o se perdeu a parte decimal, o valor multiplicado ser� somente a parte inteira da variavel anterior.
}