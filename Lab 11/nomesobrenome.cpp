#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nome;
	string sobrenome;

	cout << "Digite seu nome e sobrenome: ";
	cin >> nome >> sobrenome;
	cout << "Bom dia senhor, " << sobrenome << ". Ou devo chamá-lo de " << nome << "?";
}