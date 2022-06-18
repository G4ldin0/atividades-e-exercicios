#include <iostream>
using namespace std;

void main()
{
	system("chcp 1252 > nul");

	float a, b, c, A, v; // A = area; v = volume. float para usar numeros não inteiros

	//input
	cout << "Digite os valores da base do prisma" << endl; //headline
	
	cout << "Lado a: ";
	cin >> a;

	cout << "Lado b: ";
	cin >> b;

	//calculo da area
	A = a * b;

	cout << "Área da base: " << A << endl;

	//input do extrusor
	cout << "Agora o valor da altura do prisma" << endl << "Lado c: ";
	cin >> c;

	//calculo do volume
	v = A * c;

	
	//output
	cout << "Volume do prisma = " << v;

}