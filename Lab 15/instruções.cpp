#include <iostream>
using namespace std;

int main()
{
	float peso;
	peso = 30;
	cout << peso;
	delete peso; //todo o código está correto, exceto por esta linha.
	/*
	* peso é uma variável automaticamente alocada, portanto não é possível "deletá-la".
	* quando se tenta compilar o código, é exibida uma mensagem falando que não é possível usar a função delete em objetos que não são ponteiros
	* portanto, se, ao invez de [float peso] houvesse [float* peso = new float] o código seria válido.
	*/
}