#include <iostream>
using namespace std;

union jogador
{
	char nome[25];		//nome do jogador
	int numero;			//numero da camisa do jogador
};

struct gol
{
	jogador jog;		//identificador do jogador
	int hora, min;		//hora e minuto em que o gol foi marcado
};

istream& operator>>(istream& is, gol a)
{
	cin >> a.jog.nome;
	cin >> a.hora; 
	cin.ignore()
		; cin >> a.min;
	return is;
}

int main()
{
	gol momento[3];
	cout << "Digite os dados dos 3 ultimos gols: ";
	cout << "Modelo: [NOME] [HH:MM]\n";
	for (short i = 0; i < 3; i++)
	{
		cout << "Gol: ";
		cin >> momento[i];
	}
}
