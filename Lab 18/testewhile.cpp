#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	while (++i < 4)
		cout << "Oi! "; //pela condicional ser i < 4 e i � incrementado toda vez que passa na linha da condicional, "Oi! " ser� exibido 3 vezes
	do
		cout << "Tchau! "; //da quarta para a nona vez, ser� exibido "tchau! ", totalizando 6 vezes
	while (i++ <= 8);
}