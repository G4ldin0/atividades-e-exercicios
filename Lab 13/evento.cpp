#include <iostream>
using namespace std;

struct dia
{
	unsigned short dia;
	unsigned short mes;
	unsigned int ano;
};

struct horario
{
	unsigned short hora;
	unsigned short minuto;
};

struct evento
{
	dia marcado;
	horario hora;
	char desc[50];
};

istream& operator>>(istream& is, dia a)
{
	is >> a.dia;
	is.ignore();
	is >> a.mes;
	is.ignore();
	is >> a.ano;

	return is;
}
ostream& operator<<(ostream& os, dia a)
{
	os.width(2);
	os.fill('0');
	os << a.dia;
	os.width(1);
	os << "/";
	os.width(2);
	os << a.mes;
	os.width(1);
	os << "/";
	os.width(4);
	os << a.ano;

	return os;
}


istream& operator>>(istream& is, horario a)
{
	is >> a.hora;
	is.ignore();
	is >> a.minuto;

	return is;
}
ostream& operator<<(ostream& os, horario a)
{
	os.width(2);
	os.fill('0');
	os << a.hora;
	os.width(1);
	os << ":";
	os.width(2);
	os << a.minuto;

	return os;
}

istream& operator>>(istream& is, evento a)
{
	//cout << "Data: ";
	is >> a.marcado;
	//cout << "Hora: ";
	is >> a.hora;
	//cout << "Descrição: ";
	is >> a.desc;

	return is;
}
ostream& operator<<(ostream& os, evento a)
{
	os << a.marcado << " " << a.hora << " " << a.desc;

	return os;
}


int main()
{
	evento marcados[10];
	short quant;

	cout << "Quantos eventos deseja programar: ";
	cin >> quant;

	for (char i = 0; i <= quant; i++)
	{
		cout << endl << "#" << i << endl;
		cin >> marcados[i];
	}


	cout << endl << "eventos cadastrados: ";
	for (char i = 0; i <= quant; i++)
	{
		cout << marcados[i] << endl;
	}
}