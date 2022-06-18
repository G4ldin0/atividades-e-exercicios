#include <iostream>
#include <string>
using namespace std;


bool testarBit(unsigned short ch, int pos);
string exibirBits(unsigned short ch);

int main()
{
	system("chcp 1252 > nul");

	//variaveis
	unsigned short valor;

	//input
	cout << "Digite um valor entre 0 e 255: ";
	cin >> valor;

	//output
	cout << valor << " em binário é " << exibirBits(valor);
}

string exibirBits(unsigned short ch)
{
	string binario = "00000000"; //vetor é mais facil de escrever
	 
	//a função vai conferindo do ultimo caractere do vetor até o primeiro
	for (int i = size(binario); i >= 0; i--)
	{
		if (testarBit(ch, size(binario)-i) == true) //se o ponto oposto ao caractere especifico, no numero, existe ou não
		{
			binario[i] = '1'; //se existir, coloca 1
		}
		else
		{
			binario[i] = '0'; //se não, coloca zero
		}
	}

	return binario; // e por fim retorna a própria string
}

bool testarBit(unsigned short ch, int pos)
{
	unsigned char mask = 1; //mascara provisória com o valor 00000001
	mask = mask << pos - 1; //move o 1 um numero de casas específicas
	return ch & mask; //true para qualquer valor, false para nenhum valor.
}