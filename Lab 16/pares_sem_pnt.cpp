#include <iostream>
using namespace std;

int main()
{
	short vet[] = { 32, 16, 47, 10, 82, 29, 30, 28, 15, 64 }; //vetor de inteiros solicitado
	for (short i = 0; i < 5; i ++) //i < 5 porque s� s�o necess�rias 5 repeti��es ( aparecem 5 pares apenas);
	{
		cout << "[";
		cout << vet[i]; //elemento da esquerda
		cout << ",";
		cout << vet[(sizeof(vet) / sizeof(short)) - i - 1]; //elemento equivalentemente oposto (da direita); sizeof(vet)/sizeof(short) vai dar o tamanho do vetor, -1 pra encontrar o endere�o, -i pra definir a posi��o do vetor
		cout << "]";
		cout << " ";
	}
}