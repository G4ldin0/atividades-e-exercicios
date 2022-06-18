#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	while (++i < 4)
		cout << "Oi! "; //pela condicional ser i < 4 e i é incrementado toda vez que passa na linha da condicional, "Oi! " será exibido 3 vezes
	do
		cout << "Tchau! "; //da quarta para a nona vez, será exibido "tchau! ", totalizando 6 vezes
	while (i++ <= 8);
}