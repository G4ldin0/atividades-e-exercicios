#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

char* inverter(char a[]) 
{
	char* temp = new char[60]{};//ponteiro para guardar o vetor
	for (char i = 59, j = 0; i >= 0; i--) //for que vai da ultima posi��o para a primeira
	{
		if (a[i] != '\0') //se nao for nulo
		{
			temp[j] = a[i]; //passa o valor atual (do lado direito) e coloca na posi��o de j
			j++; // j s� aumenta se nao for nulo
		}
	}
	return temp;
}

char* semEspaco(char a[])
{
	char* temp = new char[60]{}; //um ponteiro para guardar o vetor
	for (char i = 0, j = 0; a[i] != '\0'; i++) //passa por todos os caracteres do vetor at� o \0
	{
		if (a[i] != ' ') //se nao for um espa�o, coloca na posi��o de j
		{
			temp[j] = a[i];
			j++; //j so aumenta se nao for espa�o
		}
	}
	return temp;
}

int main()
{

	system("chcp 1252 > nul");

	char in[60]{};			//entrada
	char mirror[60]{};		//invertido

	cin.getline(in, 60);
	system("cls");

	strncpy(in, semEspaco(in), 60);			//tirei os espa�os da entrada e coloquei na outra variavel
	strncpy(mirror, inverter(in), 60);		//inverti a string da variavel e coloquei na outra


	//condicionais pra output
	if (!(strcmp(in, mirror)))
		cout << "� um pal�ndromo!";
	else
		cout << "n�o � um pal�ndromo.";
}