#include <iostream>
using namespace std;

enum formatos { JPG, PNG, BMP };

struct imagem
{
	char nome[20];
	int altura, largura;
	short formato;
};

void exibirimagem(imagem* a)
{
	cout << "A imagem \"" << a->nome << "\" com o tamanho " << a->altura << "x" << a->largura << " tem formato ";
	switch (a->formato) //usei um switch porque parecia mais facil de escrever do que diversos if's
	{
	case 0:
		cout << "JPG";
		break;
	case 1:
		cout << "PNG";
		break;
	case 2:
		cout << "BMP";
		break;
	default:
		cout << " ";
	}
}

int main()
{
	imagem entrada;
	cout << "Qual o nome da imagem? ";
	cin >> entrada.nome;
	cout << "Qual o tamanho da imagem? (HXL) ";
	cin >> entrada.altura;
	cin.get();
	cin >> entrada.largura;
	cout << "Qual o formato da imagem ( 0 = [JPG] 1 = [PNG] 2 = [BMP]"; //como não tive uma ideia melhor, decidi só instruir a por 0, 1 ou 2
	cin >> entrada.formato;
	exibirimagem(&entrada);

}