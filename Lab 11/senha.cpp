#include <iostream>
#include <string>
using namespace std;

int main()
{
	string senha = "ProgComp"; //defini a senha padr�o
	string entrada; //e a string que vai guardar a entrada do usu�rio
	cout << "Digite a senha: ";
	getline(cin, entrada); //recebe a entrada (coloquei getline pra buscar familiariedade)
	if (entrada == senha) //e confere se t� certa!
	{
		cout << "Senha correta!";
	}
	else
	{
		cout << "Senha incorreta!";
	}
}