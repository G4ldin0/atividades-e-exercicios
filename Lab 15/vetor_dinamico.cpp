#include <iostream>
using namespace std;

int main()
{
	short quant;
	cout << "Quantos valores deseja guardar?";
	cin >> quant; //tamanho do vetor
	int* vet = new int[quant];
	cout << "Quais são os valores? ";
	for (short i = 0; i < quant; i++) //loop que repete "quant" vezes
	{
		cin >> vet[i]; // elementos do vetor
	}

	cout << "Os valores "; //output
	for (short i = 0; i < quant; i++)
	{
		if (i == quant - 1)
		{
			cout << "e "; //fiz um if pra colocar aquele "e" no meio da frase de output
		}
		cout << vet[i] << ", "; // mas em compensação fica uma virugla a mais
	}
	cout << "todos foram armazenados no vetor dinâmico!"; //por isso eu tentei meio que passar por isso mudando um pouco a frase
}