#include <iostream>
using namespace std;

struct nadador
{
	char nome[20];
	int idade;
	const char* categoria;
};

int main()
{
	nadador novo{};
	cout << "Nome do nadador: ";
	cin >> novo.nome;
	cout << "Idade do Nadador: ";
	cin >> novo.idade;

	if (novo.idade >= 5 && novo.idade < 7) novo.categoria = "infantil";
	else if (novo.idade > 8 && novo.idade < 10) novo.categoria = "juvenil";
	else if (novo.idade > 11 && novo.idade < 15) novo.categoria = "adolescente";
	else if (novo.idade > 15 && novo.idade < 30) novo.categoria = "adulto";
	else if (novo.idade > 30) novo.categoria = "sênior";

	cout << "Categoria do nadador: " << novo.categoria;

}