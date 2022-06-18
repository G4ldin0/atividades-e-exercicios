#include <iostream>
using namespace std;

struct conta //registro das informações da conta
{
	unsigned long long identificador;
	char nome[50];
	long long saldo;
};

void exibir(conta a) //achei que seria mais facil criar uma variável pra exibir as informações
{
	cout << endl << "Nome: " << a.nome << "\nIdentificador: " << a.identificador << "\nSaldo atual: " << a.saldo << endl;
}

int main()
{
	conta novo; //variavel tipo conta
	novo.saldo = 0; 

	cout << "Entre com os dados da conta(identificador/nome): ";
	cin >> novo.identificador;
	cin.ignore();
	cin.getline(novo.nome, 50); //entrada de dados, cin.getline pra pegar nomes compostos completos

	exibir(novo);

	cout << "Quanto deseja depositar? ";
	cin >> novo.saldo;

	exibir(novo); //e, depois que pegar o novo saldo, exibi denovo as informações
}