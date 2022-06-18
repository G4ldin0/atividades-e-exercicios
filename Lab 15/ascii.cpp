#include <iostream>
using namespace std;

struct ascii
{
	char ch;
	short n;
};

ascii* tipo(int a, char letra)
{
	ascii* temp = new ascii;
	temp->ch = letra;
	temp->n = a;
	return temp;
}

int main()
{
	ascii val;
	cout << "Digite um caractere e um valor: ";
	cin >> val.ch;
	cin >> val.n;

	ascii* point = tipo(val.n, val.ch);
	cout << endl;
	cout << point->ch;
	cout << endl;
	cout << point->n;
	delete point;
}