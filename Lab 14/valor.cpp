#include <iostream>
using namespace std;
int main()
{
	int valor = 10, * temp, soma = 0;
	temp = &valor;		// temp recebe o endere�o de valor
	*temp = 20;			// a variavel do endere�o de temp (valor) se torna 20
	temp = &soma;		// temp recebe o endere�o de soma
	*temp = valor;		// a variavel do endere�o de temp (soma) se torna igual ao da variavel valor (20)
	cout << "valor: " << valor << "\nsoma: " << soma << endl;
}