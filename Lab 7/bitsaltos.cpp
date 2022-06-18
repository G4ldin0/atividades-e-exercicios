#include <iostream>
using namespace std;

unsigned int bitsAltos(unsigned int v);

int main()
{
	//variaveis
	unsigned int valor;
	
	//input
	cout << "Digite aqui o valor: ";
	cin >> valor;

	//output
	cout << "Os bits mais altos de " << valor << " correspondem a " << bitsAltos(valor);
}

unsigned int bitsAltos(unsigned int v)
{
	return v >> 16; //só fiz afastar os bits 16 "casas" pra direita. O que sair vai ser apagado, e vai ficar o que estaria nas 16 casas mais altas.
}