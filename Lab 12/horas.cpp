#include <iostream>
using namespace std;

struct horario
{
	unsigned int hora;
	unsigned int minuto;
};

istream& operator>>(istream& is, horario a)
{
	cout << "modelo(HH:MM): ";
	is >> a.hora;
	is.ignore();
	is >> a.minuto;

	return is;
}
ostream& operator<<(ostream& os, horario a)
{
	os.fill('0');
	os.width(2);
	os << a.hora;
	os.width(1);
	os << ":";
	os.width(2);
	os << a.minuto;

	return os;
}

horario operator-(horario a, horario b)
{
	horario temp;
	temp.hora = (24 + (a.hora - b.hora) % 24);
	temp.minuto = a.minuto - b.minuto; //(60 + (a.minuto - b.minuto)) % 60;
	/*
	if (a.minuto - b.minuto < 0)
	{
		temp.hora -= 1;
	} 
	*/
	return temp;
}

int main()
{
	horario h1{};
	horario h2{};
	cout << "Entre com os dois horários:\n";
	cin >> h1;
	cin >> h2;
	cout << h2;
}