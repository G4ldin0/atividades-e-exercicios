#include <iostream>
using namespace std;

struct livro
{
	char nome[40];
	char autor[40];
	unsigned short publicacao;
};
struct jogo
{
	char nome[40];
	char empresa[40];
	unsigned short publicacao;
};

int main()
{
	livro empr1[50] = {};
	jogo empr2[50] = {};
	short tipo; //defini duas variaveis pra receber os inputs de entrada das escolhas do usuário
	short esc;
	cout << "O que quer emprestar? (0 = jogo ; 1 = livro)\n";
	cin >> tipo;
	if (tipo == 0) //if pros dois casos
	{
		cout << "qual a posição da entrega?";
		cin >> esc;
		cin.ignore();
		cout << "Qual o nome do jogo? ";
		cin.getline(empr2[esc].nome, 50); //um getline pra cada vetor de caractere
		cout << "Qual a desenvolvedora do jogo? ";
		cin.getline(empr2[esc].empresa, 50);
		cout << "Qual o ano de publicação do jogo? ";
		cin >> empr2[esc].publicacao;
	}
	else if (tipo == 1)
	{
		cout << "qual a posição da entrega?";
		cin >> esc;
		cin.ignore();
		cout << "Qual o nome do livro? ";
		cin.getline(empr1[esc].nome, 50);
		cout << "Qual o autor do livro? ";
		cin.getline(empr1[esc].autor, 50);
		cout << "Qual o ano de publicação do livro? ";
		cin >> empr1[esc].publicacao;
	}
	else
	{
		cout << "Comando errado!";
	}
	cout << endl << endl << "Agradecemos o emprestimo!" << endl << endl;
}