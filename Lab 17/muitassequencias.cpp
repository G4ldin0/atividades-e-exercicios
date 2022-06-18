#include <iostream>
using namespace std;

void repete(short comeca, short termina, short vel) //decidi fazer uma função, pra ficar mais facil
{
	if (vel > 0)
	{
		for (char i = comeca; i <= termina; i += vel)
			cout << int(i) << " ";
	}
	else
	{
		for (char i = comeca; i >= termina; i += vel)
			cout << int(i) << " ";
	}

	cout << endl;
}

int main()
{
	short quant; //entrada do usuario
	cout << "Você quer que eu conte de 1 até quanto? ";
	cin >> quant;

	//diversos for, um pra cada linha
	repete(1, quant, 1);
	repete(quant, 1, -1);
	repete(1, quant-1, 2);
	repete(quant-1, 1, -2);
	repete(2, quant, 2);
	repete(quant, 2, -2);
}
