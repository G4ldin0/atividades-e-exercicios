#include <iostream>
#include <cmath>
using namespace std;

//declara��o da fun��o em float para abranger os decimais
//duas variaveis para suportar o conceito de vetor
float modulo(float x, float y);


int main()
{

	//est�tica
	system("chcp 1252 > nul");


	float n1, n2;

	//input do vetor
	cout << "Digite o valor das coordenadas do vetor:" << endl;
	cout << "x: ";
	cin >> n1;
	cout << "y: ";
	cin >> n2;

	//output
	cout << "O tamanho do vetor � " << modulo(n1, n2);
}

float modulo(float x, float y)
{
	float modulo = sqrt(pow(x, 2) + pow(y, 2));
	return modulo;
}