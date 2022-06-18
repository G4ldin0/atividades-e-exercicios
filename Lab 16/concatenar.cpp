#include <iostream>
using namespace std;

//defini um registro pra facilitar a compreensão, com uma parte sendo a string, e a outra o tamanho dela
struct palavra
{
	char letras[10];
	int tamanho;
};

int main()
{
	short quant{}; //variavel do tamanho da string concatenada
	palavra vet[4]{}; //vetor de palavras do usuário


	for (short i = 0; i < 4; i++)
	{
		cin >> vet[i].letras; //pegando do usuário as palavras
		for (short j = 0; vet[i].letras[j]; j++) vet[i].tamanho++; //definindo o tamanho de cada palavra
	}


	for (short i = 0; i < 4; i++) quant += vet[i].tamanho + 1; //vendo o tamanho do vetor concatenado
	char* concatenado = new char[quant] {};


	short k{}; //k vai passar por todos os endereços, ele que vai guardar a posição atual do vetor concatenado 
	for (short i = 0; i < 4; i++) //i vai pegar a posição do vetor de palavras
	{
		for (short j = 0; j < vet[i].tamanho; j++) //j vai pegar a posição das letras na palavra
		{	
			*(concatenado + k) = vet[i].letras[j]; //essa linha coloca a letra assimilada da palavra no endereço específico do vetor concatenado
			k++; //altera a posição atual do vetor concatenado
		}
		*(concatenado + k) = ' '; //ao final de toda palavra, adiciona um espaço
		k++;
	}
	


	for (short i = 0; i < quant; i++)cout << *(concatenado + i); //cout em cada letra do vetor concatenado
}