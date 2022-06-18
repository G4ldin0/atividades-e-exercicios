#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
	long long resultado = 200530LL * 420800; 
	/*como, por padrão, as constantes são guardadas em int, as operações que não cabem em int acabam dando erro,
	dessa forma, é preciso atribuir o tipo que as caibam ( nesse caso, long long).*/
	cout << "Direto: " << resultado << endl;
	cout << "Função: " << calculo(200530, 420800) << endl;
	return 0;
}

long long calculo(long long a, long long b)
{
	return a * b;
	/* na função, por outro lado, os valores que são recebidos já são atribuidos automáticamente para o tipo 
	correto, facilitando o processamento das informações.*/
}