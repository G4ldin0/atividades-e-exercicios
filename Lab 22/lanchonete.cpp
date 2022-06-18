#include <iostream>
using namespace std;

struct prato
{
	char prato[10];
	float preco;
};

void exibirCardapio(prato cardapio[], int tam)
{
	cout << "          QUITANDA DO JOÃOZINHO         \n";
	cout << "   -----------------------------------  \n";

	for (int i = 0; i < tam; i++)
	{
		cout << i << ".";
		cout.width(18); cout << left;
		cout << cardapio[i].prato;

		cout.width(15); cout << right;
		cout << "R$";
		cout << fixed; cout.precision(2);
		cout << cardapio[i].preco;
		cout << endl;
	}
	cout << endl;
}

void comanda(prato cardapio[], int tam, int entrada[])
{
	cout << "    COMANDA     \n";
	cout << "----------------\n";
	for (int i = 0; i < tam; i++)
	{
		cout.width(10); cout << left;
		cout << cardapio[i].prato;

		cout.width(3); cout << right;
		cout << entrada[i];
		cout << " un";
		cout << endl;
	}
	cout << "----------------\n";
	cout << "Digite o número do produto ([5] para finalizar): ";
}

void TotalPagamento(prato cardapio[], int tam, int entrada[])
{
	float* total = new float{};

	cout << "TOTAL A PAGAR: \n";
	cout << "---------------\n";

	for (int i = 0; i < tam; i++)
	{
		if (entrada[i])
		{

			cout << entrada[i] << "x ";
			cout.width(10); cout << left;
			cout << cardapio[i].prato;
			cout << ": R$";
			cout << entrada[i] * cardapio[i].preco;
			*total +=  entrada[i] * cardapio[i].preco;
			cout << endl;
		}
	}

	cout << endl;

	cout.width(13); cout << left;
	cout << "Total";
	cout << ": R$";
	cout.precision(2);
	cout << *total;
	delete total;

}

int main()
{
	setlocale(LC_ALL, "portuguese");
	prato cardapio[5]
	{
		{"Completo", 4.50},
		{"Pastel", 3},
		{"Hotdog", 5},
		{"Suco", 2},
		{"Coca", 6}
	};

	int usuario[5]{}; //cada endereço remete a um prato
	int in{};
	int placeholder;

	while (in != 5)
	{
		exibirCardapio(cardapio, 5);
		comanda(cardapio, 5, usuario);

		cin >> in;

		switch (in)
		{
		case 0:
			cout << "Quantidade: ";
			cin >> placeholder;
			usuario[in] += placeholder;
			break;
		case 1:
			cout << "Quantidade: ";
			cin >> placeholder;
			usuario[in] += placeholder;
			break;
		case 2:
			cout << "Quantidade: ";
			cin >> placeholder;
			usuario[in] += placeholder;
			break;
		case 3:
			cout << "Quantidade: ";
			cin >> placeholder;
			usuario[in] += placeholder;
			break;
		case 4:
			cout << "Quantidade: ";
			cin >> placeholder;
			usuario[in] += placeholder;
			break;
		case 5:
			break;
		default:
			cout << "indefinido!";
		}

		std::system("cls");
	}

	TotalPagamento(cardapio, 5, usuario);
}