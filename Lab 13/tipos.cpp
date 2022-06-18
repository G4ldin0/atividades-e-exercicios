#include <iostream>

enum trave { LEsq, LDir, CantoEsq, CantoDir, Centro };

union jogador
{
	char nome[25];
	int numero;
};

struct gol
{
	jogador jog;			//identifica��o do jogador
	float x, y, z;			//posi��o da bol nas coordenadas
	trave local;			//onde a bola entrou
	float velo;				//velocidade da bola
	float acel;				//acelera��o da bola
};

int main()
{
	gol estatistica[10];	//estatisticas para at� 10 gols

	/*
	estatistica = vetor de gols												(estatistica+9)->local = enumerador trave
	estatistica[4] = gol													estatistica[2].velo = float
	estatistica [1].jog = uni�o jogador										(estatistica+1)->jog.nome[0] = caractere
	estatistica->jog.numero = int											estatistica[6].acel = float
*/
}