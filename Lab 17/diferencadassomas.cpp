#include <iostream>
using namespace std;

int main()
{
	short tam = 100; //variavel tamanho por motivos de depura��o e controle maior

	long SomaQuads{}; //guardei as variaveis em long por est�tica, mas porque nao sabia exatamente se ia precisar usar long long
	long QuadSomas{};
	
	//la�os de cada caso
	for (char i = 0; i <= tam; i++)
	{
		SomaQuads = SomaQuads + pow(i, 2);
	}

	for (char i = 0; i <= tam; i++)
	{
		QuadSomas = QuadSomas + i;
	}
	QuadSomas = pow(QuadSomas, 2); //especificamente no caso do quadrado das somas eu precisei usar uma linha fora do loop, porque n�o sabia como adicionar o quadrado no final do loop de dentro dele




	//output
	cout << "Soma dos Quadrados: " << SomaQuads;
	cout << endl;
	cout << "Quadrado das Somas: " << QuadSomas;
	cout << endl;
	cout << "Diferen�a entre ambos: " << QuadSomas - SomaQuads;
}