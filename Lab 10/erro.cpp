#include <iostream>
using namespace std;

int main()
{
	int vet[5] = { 10, 20, 30, 40, 50 };
	
	for (short i = 0; i >= 0; i++) //normalmente os for tem uma se��o para defenir at� onde o loop vai, mas como o caso � se manter infinito, podemos apenas dizer que � maior ou igual ao valor inicial
	{
		vet[i] = 60; //usando o passo-a-passo, o m�ximo que o i chega antes de apontar o erro � no 310!
		cout << i << " "; //depois, tentando ver o valor por cout(mais pr�tico), o valor foi 461. Depois, 269! e depois 205
	}
}
//o valor m�ximo varia em cada depura��o, provavelmente envolvendo alguma quest�o com lixos de mem�ria ou algo assim...