#include <iostream>
using namespace std;

int main()
{
	//variavel
	float num;

	//input
	cout << "Digite um número real";
	cin >> num;

	//output
	cout << "A parte inteira: " << int(num) << endl; //int(num) vai truncar o valor para a parte inteira
	cout << "A parte fracionaria: " << num - int(num) << endl; //se eu pegar o numero real e subtrair num(int) [a parte inteira] sobrará apenas a fracionária
	//provavelmente não é a forma mais eficiente, mas a funcional!
}