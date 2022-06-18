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
			sub++; //incrementa o tanto de substituições
			cout << '!'; //escreve uma exclamaçao
		}
		else if (ch == '!') //senão, se for uma exclamação
		{	
			sub++; //incrementa o tanto de substituições
			cout << "!!"; //escreve duas exclamações
		}
		else if (ch != '#') cout << ch; //senão se não for o hashtag, escreve o caracter normalmente
		
	} while (ch != '#');

	cout << endl << "substituições: " << sub; //exprime o tanto de substituições que houveram
}