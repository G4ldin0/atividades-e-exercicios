#include <iostream>
using namespace std;

int main()
{
	short inicio, fim{}; //declara��o da sequencia
	cout << "Indique o inicio e o fim da sequencia: ";
	cin >> inicio >> fim;
	
	cout << fim - inicio << " " << abs(fim - inicio) << " " << (fim - inicio) / abs(fim - inicio);
	
	short somas{}; //variavel que guarda o valor das somas
	for (char i = inicio; i <= fim; i = i + (fim-inicio)/(abs(fim-inicio)))
		somas = somas + i; // for que come�a na escolha do usuario, vai ate o fim escolhido, e varia na dire��o do fim

	cout << "A soma dos numeros da sequencia escolhida � " << somas;
}