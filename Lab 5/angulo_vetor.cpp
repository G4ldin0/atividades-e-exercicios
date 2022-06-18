#include <iostream>
#include <cmath>

using namespace std;

float angulo(float x, float y);

int main()
{
	// variaveis
	float n1, n2;

	//input
	cout << "Digite as coordenadas do vetor: " << endl;
	cout << "x: ";
	cin >> n1;

	cout << "y: ";
	cin >> n2;

	//output
	cout << "O ângulo do vetor é " << angulo(n1, n2) << " graus.";
}

float angulo(float x, float y)
{
	float valor = atan2 (y,x);
	return (valor * 180) / 3.14159;

}