#include <iostream>
using namespace std;

int main()
{
	float peso;
	peso = 30;
	cout << peso;
	delete peso; //todo o c�digo est� correto, exceto por esta linha.
	/*
	* peso � uma vari�vel automaticamente alocada, portanto n�o � poss�vel "delet�-la".
	* quando se tenta compilar o c�digo, � exibida uma mensagem falando que n�o � poss�vel usar a fun��o delete em objetos que n�o s�o ponteiros
	* portanto, se, ao invez de [float peso] houvesse [float* peso = new float] o c�digo seria v�lido.
	*/
}