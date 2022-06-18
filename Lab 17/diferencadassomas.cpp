#include <iostream>
using namespace std;

int main()
{
	short tam = 100; //variavel tamanho por motivos de depuração e controle maior

	long SomaQuads{}; //guardei as variaveis em long por estética, mas porque nao sabia exatamente se ia precisar usar long long
	long QuadSomas{};
	
	//laços de cada caso
	for (char i = 0; i <= tam; i++)
	{
		SomaQuads = SomaQuads + pow(i, 2);
	}

	for (char i = 0; i <= tam; i++)
	{
		QuadSomas = QuadSomas + i;
	}
	QuadSomas = pow(QuadSomas, 2); //especificamente no caso do quadrado das somas eu precisei usar uma linha fora do loop, porque não sabia como adicionar o quadrado no final do loop de dentro dele




	//output
	cout << "Soma dos Quadrados: " << SomaQuads;
	cout << endl;
	cout << "Quadrado das Somas: " << QuadSomas;
	cout << endl;
	cout << "Diferença entre ambos: " << QuadSomas - SomaQuads;
}