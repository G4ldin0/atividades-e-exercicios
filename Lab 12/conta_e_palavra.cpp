#include <iostream>
using namespace std;


//registros
struct palavra //registro palavra
{
	string port;
	string ingl;
	string esp;
};
struct conta //registro das informações da conta
{
	unsigned long long identificador;
	char nome[50];
	long long saldo;
};


//funções

ostream& operator<<(ostream& os, palavra& a) //cout pra palavra
{
	os << a.port << " " << a.ingl << " " << a.esp << "\n";
	return os;
}
ostream& operator<<(ostream& os, conta& a) //cout pra conta
{
	os << endl << "Nome: " << a.nome << "\nIdentificador: " << a.identificador << "\nSaldo atual: " << a.saldo << endl;
	return os;
}

int main()
{
	system("chcp 1252 > nul");
	palavra dicionario[3] = { {"tubarão", "shark", "tiburón"}, {"rapadura", "brown sugar", "azúcar morena"} };
	conta nova = { 124365, "Josefa da Silva", 0 };
	cout << dicionario[0];
	cout << nova;
}