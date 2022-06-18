#include <iostream>
#include <string>
using namespace std;

int main()
{
	string senha = "ProgComp"; //defini a senha padrão
	string entrada; //e a string que vai guardar a entrada do usuário
	cout << "Digite a senha: ";
	getline(cin, entrada); //recebe a entrada (coloquei getline pra buscar familiariedade)
	if (entrada == senha) //e confere se tá certa!
	{
		cout << "Senha correta!";
	}
	else
	{
		cout << "Senha incorreta!";
	}
}