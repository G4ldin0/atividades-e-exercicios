#include <iostream>
#include <fstream>
using namespace std;

struct produto
{
	float normal;
	float atacado;
	int quant;
};

float valor(produto prod, int quant)
{
	float temp{};
	
	if (quant > prod.quant)
		temp = prod.atacado * quant;
	else
		temp = prod.normal * quant;

	return temp;
}

float totalvalor(produto* inicioProds, produto* fimProds, int* inicioQuants, int* fimQuants)
{
	float temp{};

	for (int* i = inicioQuants; i < fimQuants; i++)
	{
		temp += valor(inicioProds[i - inicioQuants], inicioQuants[i - inicioQuants]);
	}

	return temp;
}


int main(void)
{

	setlocale(LC_ALL, "portuguese");
	
	ifstream fin;

	int tam[2]{};

	fin.open("produtos.txt");

	fin >> tam[0];
	produto* lista = new produto[tam[0]]{};

	for (int i = 0; i < tam[0]; i++)
	{
		fin.ignore(); fin.ignore(); fin.ignore();
		fin >> lista[i].normal;
		fin.ignore(); fin.ignore(); fin.ignore();
		fin >> lista[i].atacado;
		fin.ignore(); fin.ignore(); fin.ignore();
		fin >> lista[i].quant;
	}
	fin.close();

	fin.open("pedido.txt");
	fin >> tam[1];
	int* pedidos = new int[tam[1]] {};
	for (int i = 0; i < tam[1]; i++)
		fin >> pedidos[i];
	fin.close();

	float preço = totalvalor(lista, lista + tam[0], pedidos, pedidos + tam[1]);

	cout << fixed;  cout.precision(2);
	cout << "Total a pagar: R$" << preço;

}