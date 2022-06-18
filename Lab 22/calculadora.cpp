#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "portuguese");

	float operando[2]{};

	char operador{};

	cout << "CALCULADORA DO JOÃOZINHO\n";
	cout << "------------------------\n";

	cout << "Digite os valores: \n";
	cout << "operandos [1]: ";
	cin >> operando[0];
	cout << "operandos [2]: ";
	cin >> operando[1];

	cout << "Operandos: \n"
			"a. Soma\n"
			"b. Subtratação\n"
			"c. Multiplicação\n"
			"d. Subtração\n";

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
		cout << "Subtração = ";
		cout << operando[0] - operando[1];
		break;
	case 'c':
	case 'C':
		cout << "Multiplicação = ";
		cout << operando[0] * operando[1];
		break;
	case 'd':
	case 'D':
		cout << "Divisão = ";
		cout << operando[0] / operando[1];
		break;
	}

	cout << endl;
}