#include <iostream>
#include <cmath>

using namespace std;

int Absoluto(int v);

void main()
{
	system("chcp 1252 > nul");
	
	//variavel
	int valor;

	//input
	cout << "Digite um n�mero inteiro: ";
	cin >> valor;

	//output
	cout << "O valor absoluto de " << valor << " � " << Absoluto(valor);
}


//fun��o solicitada. Int pois � solicitado um numero inteiro
int Absoluto(int v)
{
	//se pegarmos a raiz do quadrado de algum numero, teremos o seu absoluto
	int resultado = sqrt(pow(v, 2));
	return resultado;
}