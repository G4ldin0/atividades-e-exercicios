#include <iostream> //n�o foi necess�rio usar a biblioteca cmath pois todas as equa��es puderam ser usadas com operadores b�sicos
using namespace std;

double aumento(double valor);

int main()
{
	double salario;
	cout << "Salario atual R$"; //deixei o texto sem espa�o para identificar que o valor desejado � em reais
	cin >> salario;

	cout << "Sal�rio ajustado para R$" << aumento(salario);
}

double aumento(double valor)
{
	double aumento = valor + (valor * 0.15); // equa��o b�sica do aumento: valor mais a porcentagem desse valor.
	return aumento;
}