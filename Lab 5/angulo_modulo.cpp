#include "angulo_vetor.h"

int main()
{
	//variaveis
	float n1, n2;

	//input
	cout << "Digite as coordenadas do vetor: " << endl;
	cout << "x: ";
	cin >> n1;

	cout << "y: ";
	cin >> n2;

	//output

	cout << "Coordenadas polares do vetor: " << endl;
	cout << "(" << modulo(n1, n2) << ", " << angulo(n1, n2) << ")";
}