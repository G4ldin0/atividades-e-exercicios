#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	//variaveis
	int v1, v2;

	//input
	cout << "Digite dois n�meros inteiros: ";
	cin >> v1 >> v2;

	//output
	cout << "O quociente de " << v1 << "/" << v2 << " � " << v1 / v2 << endl;
 	cout << "O resto da divis�o " << v1 << "%" << v2 << " � " << v1 % v2 << endl; 
}