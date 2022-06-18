#include <iostream>
using namespace std;

//funções em double para suportar decimais
double quadrado(double valor);
double cubo(double valor);

void main()
{
	//variaiveis
	double valor;

	 //input
	cout << "Digite um valor: ";
	cin >> valor;


	//output
	cout << "Quadrado = " << quadrado(valor) << endl;
	cout << "Cubo = " << cubo(valor) << endl;
	cout << "Cubo do quadrado = " << cubo(quadrado(valor)) << endl;

}

double quadrado(double valor)
{
	return valor * valor;
}

double cubo(double valor)
{
	return valor * valor * valor;
}