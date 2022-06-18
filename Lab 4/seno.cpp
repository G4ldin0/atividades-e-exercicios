#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	//variaveis em float para abrigar valores decimais
	float angulo, seno;

	//input de dados
	cout << "Digite um ângulo: " << endl;
	cin >> angulo;

	//!função round() adicionada para arredondar para cima. 
	seno = round(sin(angulo));

	//output
	cout << "Seno = " << seno;
}