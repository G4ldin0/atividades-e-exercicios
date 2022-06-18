#include <iostream>
#include <cmath>

using namespace std;

float VolumeCilindro(float h, float r);

int main()
{

	system("chcp 1252 > nul");

	//declaração de variaveis
	float raio, altura;


	//inputs
	cout << "Calcula o volume de um cilindro \n";
	cout << "------------------------------- \n";
	cout << "Entre com o raio da base: ";
	cin >> raio;
	cout << "Entre com a altura: ";
	cin >> altura;


	//output
	cout << "O volume do cilindro é " << VolumeCilindro(raio, altura);
}

float VolumeCilindro(float h, float r)
{
	float volume = 3.14159 * (r * r) * h;
	return volume;
}