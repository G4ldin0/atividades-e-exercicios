#include <iostream>
using namespace std;

int main()
{
	int sub{};
	char ch{};

	cout << "Digite um texto (# para finalizar): \n";

	do
	{
		cin.get(ch); //pega o caracter
		if (ch == '.') //se for o ponto
		{
			sub++; //incrementa o tanto de substitui��es
			cout << '!'; //escreve uma exclama�ao
		}
		else if (ch == '!') //sen�o, se for uma exclama��o
		{	
			sub++; //incrementa o tanto de substitui��es
			cout << "!!"; //escreve duas exclama��es
		}
		else if (ch != '#') cout << ch; //sen�o se n�o for o hashtag, escreve o caracter normalmente
		
	} while (ch != '#');

	cout << endl << "substitui��es: " << sub; //exprime o tanto de substitui��es que houveram
}