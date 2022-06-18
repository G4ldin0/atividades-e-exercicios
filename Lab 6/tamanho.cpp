#include <iostream>
#include <climits>
using namespace std;

void isShort(long long v)
{
	if (v > SHRT_MAX)
	{
		cout << v << " não cabe em 16 bits" << endl;
	}
	else
	{
		cout << v << " cabe em 16 bits" << endl;
	}
}

void isInt(long long v)
{
	if (v > INT_MAX)
	{
		cout << v << " não cabe em 32 bits" << endl;
	}
	else
	{
		cout << v << " cabe em 32 bits" << endl;
	}
}


void main()
{
	system("chcp 1252 > nul");
	//variaveis
	long long valor;

	//input
	cout << "Digite um valor inteiro: ";
	cin >> valor;

	//output
	isShort(valor);
	isInt(valor);
}