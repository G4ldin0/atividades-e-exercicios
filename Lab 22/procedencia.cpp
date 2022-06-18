#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	//variaveis
	float preco{};
	int codigo{};

	//entrada
	cout << "Digite o preço do produto: ";
	cin >> preco;

	cout << "Digite o código do produto: ";
	cin >> codigo;

	//casos possíveis
	cout << "Procedência = ";
	switch (codigo)
	{
	case 1:
	case 2:
		cout << "Sul";
		break;

	case 3:
		cout << "Norte";
		break;
	case 4:
		cout << "Centro-oeste";
		break;
	case 5:
	case 6:
		cout << "Nordeste";
		break;
	case 7:
	case 8:
	case 9:
		cout << "Sudeste";
	default:
		cout << "Código inválido";
		break;
	}
}