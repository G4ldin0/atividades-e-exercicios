#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	//variaveis
	int v1, v2;

	//input
	cout << "Digite dois números inteiros: ";
	cin >> v1 >> v2;

	//output
	cout << "O quociente de " << v1 << "/" << v2 << " é " << v1 / v2 << endl;
 	cout << "O resto da divisão " << v1 << "%" << v2 << " é " << v1 % v2 << endl; 
}