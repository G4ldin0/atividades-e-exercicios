#include <iostream>
using namespace std;

void main()
{
	system("chcp 1252 > nul");

	int horas1, minutos1;
	int horas2, minutos2;
	int horasFinal, minutosFinal;

	char p1, p2;

	cout << "Digite o horário de partida (HH:MM): ";
	cin >> horas1 >> p1 >> minutos1;

	cout << "Digite o horário de chegada (HH:MM): ";
	cin >> horas2 >> p2 >> minutos2;

	horasFinal = horas2 - horas1;
	minutosFinal = minutos2 - minutos1;

	if (minutos2 < minutos1)
	{
		minutosFinal = minutosFinal + 60;
		horasFinal = horasFinal - 1;
	}

	cout << "O tempo total de viajem foi " << horasFinal << " horas e " << minutosFinal << " minutos";
}