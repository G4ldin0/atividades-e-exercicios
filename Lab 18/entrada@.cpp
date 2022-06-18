#include <iostream>
using namespace std;

int main()
{
	char entrada[50]{};
	cout << "Digite um texto: ";
	cin >> entrada;
	for (char i = 0; entrada[i] != '@'; i++) cout << entrada[i];
}