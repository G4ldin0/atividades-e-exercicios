#include <iostream>
using namespace std;


//mesmas fun��es, inalteradas
char codificar(char c) { return c + 3; }
char decodificar(char c) { return c - 3; }

int main()
{
	//variaveis
	char comando; 
	int resposta; //retirei a variavel antiga, j� que n�o seria mais preciso. No lugar, adicionei a variavel resposta para guardar o valor da escolha do usu�rio

	//input
	cout << "Digite um caractere: ";
	cin >> comando;

	cout << "Deseja codificar ou decodificar este caractere(1/2)? ";
	cin >> resposta;


	//output
	switch (resposta)
	{
	case 1:
		cout << codificar(comando);
		break;
	case 2:
		cout << decodificar(comando);
		break;
	default:
		cout << "Opera��o inv�lida";
		break;
	}
}


