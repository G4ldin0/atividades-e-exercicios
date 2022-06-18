#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num1;
	int num2;
	cout << "Entre com dois numeros: ";
	cin >> num1 >> num2;
	cout << "A multiplicação entre eles é: " << stoi(num1) * num2; //função stoi() [string to int], extremamente simples de usar
}