#include <iostream>
#include <string>
using namespace std;

int contapalavras(string frase)
{
	int contador{};

	for (char i = 1; frase[i] != '\0'; i++)
	{
		if (isalpha(frase[i-1]) && (frase[i] == ' ' || frase[i] == '.' || frase[i] == '\0'))
			contador++;
			//se o caractere lido for uma letra e o caractere da frente for, ou um espaço, ou um ponto, ou o fim da frase, conte.
	}

	return contador;
}

int main()
{
	setlocale(LC_ALL, "portuguese");


	//input
	string frase;
	cout << "Entre com uma frase: ";
	getline(cin, frase);

	//processamento
	int quant = contapalavras(frase);


	//output
	cout << "Existem " << quant << " palavras nesta frase!";
}