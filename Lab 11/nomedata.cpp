#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	string nome; //strings pra guardar os valores, como pede na quest�o
	string data;
	string frase; //e uma string de mascara pra concatenar
	cout << "Nome: ";
	getline(cin, nome); //getline, tanto por quest�o de criar costume quanto pra caso a entrada tenha espa�os
	cout << "Data: ";
	getline(cin, data);
	frase = nome + " esteve aqui em " + data; //pra concatenar string basta usar o + ...
	cout << frase;
	// tambem funciona sem a mascara: cout << nome + " esteve aqui em " + data;
}