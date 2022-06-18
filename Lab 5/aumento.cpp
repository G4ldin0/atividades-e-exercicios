#include <iostream> //não foi necessário usar a biblioteca cmath pois todas as equações puderam ser usadas com operadores básicos
using namespace std;

double aumento(double valor);

int main()
{
	double salario;
	cout << "Salario atual R$"; //deixei o texto sem espaço para identificar que o valor desejado é em reais
	cin >> salario;

	cout << "Salário ajustado para R$" << aumento(salario);
}

double aumento(double valor)
{
	double aumento = valor + (valor * 0.15); // equação básica do aumento: valor mais a porcentagem desse valor.
	return aumento;
}