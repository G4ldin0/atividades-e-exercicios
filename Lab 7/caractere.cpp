#include <iostream>
using namespace std;


//fun��es simples, que pegam um valor em char, alteram em 3 unidades, e devolvem o novo valor. OBS.: declaradas anterior � main() por pura est�tica!
char codificar(char c) { return c + 3; }
char decodificar(char c) { return c - 3; }

int main()
{
	//variaveis
	char comando;
	char alterado; //crieie a vari�vel alterado para guardar o valor ap�s a codifica��o

	//input
	cout << "Digite um caractere: ";
	cin >> comando;

	//output
	alterado = codificar(comando);
	cout << "\nCaractere codificado: " << alterado;
	alterado = decodificar(comando);
	cout << "\n Caracteter decodificado: " << alterado;

}


