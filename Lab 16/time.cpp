#include <iostream>
using namespace std;

int main()
{
	char entrada[20]{}; //declarei as variaveis
	short quant{};
	char* time[10]{};//obs.: ponteiro


	cout << "digite jogador/time: "; //entrada do usu�rio
	cin >> entrada;


	for (char i = 0; entrada[i] != '/'; i++) //loop que detecta quantos caracteres tem antes da barra
	{
		quant++; //variavel que guarda o valor do tanto de caracteres
	}

	time[0] = &entrada[quant + 1]; //como eu sei o tanto de caracteres ate a barra, se eu pegar a posi��o do vetor equivalente a esse tanto +1 (era p ser +2, mas come�a a contar do 0) eu chego no endere�o de mem�ria dos caracteres depois da barra
	
	cout << "O jogador tem " << quant << " letras\n"; //output

	cout << "O seu time � o "  << * time;
}