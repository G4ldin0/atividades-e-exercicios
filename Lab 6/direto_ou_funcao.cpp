#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
	long long resultado = 200530LL * 420800; 
	/*como, por padr�o, as constantes s�o guardadas em int, as opera��es que n�o cabem em int acabam dando erro,
	dessa forma, � preciso atribuir o tipo que as caibam ( nesse caso, long long).*/
	cout << "Direto: " << resultado << endl;
	cout << "Fun��o: " << calculo(200530, 420800) << endl;
	return 0;
}

long long calculo(long long a, long long b)
{
	return a * b;
	/* na fun��o, por outro lado, os valores que s�o recebidos j� s�o atribuidos autom�ticamente para o tipo 
	correto, facilitando o processamento das informa��es.*/
}