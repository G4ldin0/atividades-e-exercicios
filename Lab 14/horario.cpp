#include <iostream>
using namespace std;

struct horario
{
	short hora, minuto;
};

void mostrarhorario(horario* a)
{
	cout.fill('0'); cout.width(2);
	cout << a->hora;
	cout.width(1);
	cout << ":";
	cout.width(2);
	cout << a->minuto;
}

int main()
{
	horario h, * pnt;
	cout << "Digite o horário atual ( HH:MM ): ";
	cin >> h.hora;
	cin.get();
	cin >> h.minuto;
	h.hora += 1;
	pnt = &h;
	cout << "seu horario está atrasado, o horário correto é ";
	mostrarhorario(pnt);
}