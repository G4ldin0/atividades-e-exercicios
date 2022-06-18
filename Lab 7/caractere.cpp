#include <iostream>
using namespace std;


//funções simples, que pegam um valor em char, alteram em 3 unidades, e devolvem o novo valor. OBS.: declaradas anterior à main() por pura estética!
char codificar(char c) { return c + 3; }
char decodificar(char c) { return c - 3; }

int main()
{
	//variaveis
	char comando;
	char alterado; //crieie a variável alterado para guardar o valor após a codificação

	//input
	cout << "Digite um caractere: ";
	cin >> comando;

	//output
	alterado = codificar(comando);
	cout << "\nCaractere codificado: " << alterado;
	alterado = decodificar(comando);
	cout << "\n Caracteter decodificado: " << alterado;

}


