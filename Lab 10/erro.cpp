#include <iostream>
using namespace std;

int main()
{
	int vet[5] = { 10, 20, 30, 40, 50 };
	
	for (short i = 0; i >= 0; i++) //normalmente os for tem uma seção para defenir até onde o loop vai, mas como o caso é se manter infinito, podemos apenas dizer que é maior ou igual ao valor inicial
	{
		vet[i] = 60; //usando o passo-a-passo, o máximo que o i chega antes de apontar o erro é no 310!
		cout << i << " "; //depois, tentando ver o valor por cout(mais prático), o valor foi 461. Depois, 269! e depois 205
	}
}
//o valor máximo varia em cada depuração, provavelmente envolvendo alguma questão com lixos de memória ou algo assim...