#include <iostream>
using namespace std;

void main()
{
	system("chcp 1252 > nul");

	int h, m; //h = horas ; m = minutos.
	char pontos; //deve ser char, pra pegar só os simbolos antes do numero (string pega tudo)

	cout << "digite as horas ";
	cin >> h >> pontos >> m; // input

	cout << "seu relógio está atrasado!" << endl;
	if (h == 23)
	{
		h = 0; //girar o relógio, evitar que fique "24:30"
	}
	else
	{
		h++;
	}
	cout << "Agora são " << h << ":" << m; //output
}