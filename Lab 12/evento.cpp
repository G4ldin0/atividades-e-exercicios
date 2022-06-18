#include <iostream>
#include <string>
using namespace std;

//registros
struct calendario
{
	unsigned short dia;
	unsigned short mes;
	unsigned short ano;
};
struct horario
{
	unsigned short hora;
	unsigned short minuto;
	unsigned short segundo;
};
struct evento
{
	calendario dia;
	horario hora;
	string local;
};


//operadores de entrada
ostream& operator<<(ostream& os, calendario& a)
{
	os.fill('0');
	os.width(2);
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
ostream& operator<<(ostream& os, horario& a)
{
	os.fill('0');
	os.width(2);
	os << a.hora;
	os.width(1);
	os << ":";
	os.width(2);
	os << a.minuto;
	os.width(1);
	os << ":";
	os.width(2);
	os << a.segundo;
	return os;
}
ostream& operator<<(ostream& os, evento& a)
{
	os << a.dia;
	os << endl;
	os << a.hora;
	os << endl;
	os << a.local;
	os << endl;
	return os;
}

//operadores de saída
istream& operator>>(istream& is, calendario& a)
{
	cout << "modelo (DD/MM/AAAA) ";
	is >> a.dia;
	is.ignore();
	is >> a.mes;
	is.ignore();
	is >> a.ano;
	return is;
}
istream& operator>>(istream& is, horario& a)
{
	cout << "modelo (HH:MM:SS) ";
	is >> a.hora;
	is.ignore();
	is >> a.minuto;
	is.ignore();
	is >> a.segundo;
	return is;
}
istream& operator>>(istream& is, evento& a)
{
	cout << "dia do evento: ";
	is >> a.dia;
	cout << "horário do evento: ";
	is >> a.hora;
	cout << "local do evento: ";
	is.ignore();
	getline(cin, a.local);
	return is;
} //coloquei um cin disso tudo no cin do evento pra facilitar

int main()
{
	//simples 5 linhas pra pegar as informações e mostrar elas
	evento novo;
	cout << "Entre com os dados do evento: \n";
	cin >> novo;
	system("cls");
	cout << "Evento principal: ";
	cout << novo;
}