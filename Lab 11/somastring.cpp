#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num1;
	int num2;
	cout << "Entre com dois numeros: ";
	cin >> num1 >> num2;
	cout << "A multiplica��o entre eles �: " << stoi(num1) * num2; //fun��o stoi() [string to int], extremamente simples de usar
}