#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "portuguese");

	float operando[2]{};

	char operador{};

	cout << "CALCULADORA DO JO�OZINHO\n";
	cout << "------------------------\n";

	cout << "Digite os valores: \n";
	cout << "operandos [1]: ";
	cin >> operando[0];
	cout << "operandos [2]: ";
	cin >> operando[1];

	cout << "Operandos: \n"
			"a. Soma\n"
			"b. Subtrata��o\n"
			"c. Multiplica��o\n"
			"d. Subtra��o\n";

	cout << "\n";
	cin >> operador;

	switch (operador)
	{
	case 'a':
	case 'A':
		cout << "Soma = ";
		cout << operando[0] + operando[1];
		break;
	case 'b':
	case 'B':
		cout << "Subtra��o = ";
		cout << operando[0] - operando[1];
		break;
	case 'c':
	case 'C':
		cout << "Multiplica��o = ";
		cout << operando[0] * operando[1];
		break;
	case 'd':
	case 'D':
		cout << "Divis�o = ";
		cout << operando[0] / operando[1];
		break;
	}

	cout << endl;
}