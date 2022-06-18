#include <iostream>
using namespace std;

int main()
{
	char vogais[5]{}; //vetor que guarda a quantidade de cada vogal, em ordem

	for (char ch{}; ch != '@'; cin >> ch) //loop que pega os caracteres de entrada
	{
		switch (ch) //casos possívei relevantes
		{
		case 'a':
		case 'A': //os casos das letras maiusculas e minusculas, pra não gerar problemas
			vogais[0]++;
			break;
		case 'e':
		case 'E':
			vogais[1]++;
			break;
		case 'i':
		case 'I':
			vogais[2]++;
			break;
		case 'o':
		case 'O':
			vogais[3]++;
			break;
		case 'u':
		case 'U':
			vogais[4]++;
			break;
		} //não foi necessário usar o default
	}


	//output
	cout << "a:" << (int)vogais[0] << endl <<
			"e:" << (int)vogais[1] << endl <<
			"i:" << (int)vogais[2] << endl <<
			"o:" << (int)vogais[3] << endl <<
			"u:" << (int)vogais[4];
}