#include <iostream>
using namespace std;

//defini um registro pra facilitar a compreens�o, com uma parte sendo a string, e a outra o tamanho dela
struct palavra
{
	char letras[10];
	int tamanho;
};

int main()
{
	short quant{}; //variavel do tamanho da string concatenada
	palavra vet[4]{}; //vetor de palavras do usu�rio


	for (short i = 0; i < 4; i++)
	{
		cin >> vet[i].letras; //pegando do usu�rio as palavras
		for (short j = 0; vet[i].letras[j]; j++) vet[i].tamanho++; //definindo o tamanho de cada palavra
	}


	for (short i = 0; i < 4; i++) quant += vet[i].tamanho + 1; //vendo o tamanho do vetor concatenado
	char* concatenado = new char[quant] {};


	short k{}; //k vai passar por todos os endere�os, ele que vai guardar a posi��o atual do vetor concatenado 
	for (short i = 0; i < 4; i++) //i vai pegar a posi��o do vetor de palavras
	{
		for (short j = 0; j < vet[i].tamanho; j++) //j vai pegar a posi��o das letras na palavra
		{	
			*(concatenado + k) = vet[i].letras[j]; //essa linha coloca a letra assimilada da palavra no endere�o espec�fico do vetor concatenado
			k++; //altera a posi��o atual do vetor concatenado
		}
		*(concatenado + k) = ' '; //ao final de toda palavra, adiciona um espa�o
		k++;
	}
	


	for (short i = 0; i < quant; i++)cout << *(concatenado + i); //cout em cada letra do vetor concatenado
}