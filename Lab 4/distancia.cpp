#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	system("chcp 1252 > nul");

	int	Px, Py, Qx, Qy; //variaveis dos pontos
	float distancia; //variavel definida como float para suportar os valores decimais da raiz quadrada

	//inputs
	cout << "Ponto P: " << endl;
	cin >> Px >> Py;

	cout << "Ponto Q: " << endl;
	cin >> Qx >> Qy;


	//calculo dos valores. decidi colocar as potencias dentro dos parenteses da raiz para facilitar a leitura
	distancia = sqrt(pow(Qx - Px, 2) + pow(Qy - Py, 2));

	//output
	cout << "A distancia entre P e Q é: " << distancia << endl /*endl só pela estética*/;
}