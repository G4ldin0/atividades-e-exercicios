#include <iostream>
using namespace std;

unsigned short bitsBaixos(int valor);

int main()
{
	//variaveis
	int valor;
	
	//input
	cout << "Digite um valor";
	cin >> valor;

	//output
	cout << "Os 16 bits mais baixos desse valor correspondem ao n�mero" << bitsBaixos(valor);
}

//provavelmente n�o � a maneira mais efetiva de se fazer isso, mas eu acabei de descobrir que se eu pegar um valor inteiro, passar por uma fun��o short e pedir para retornar o mesmo valor, ele "apaga" os bits que ficam de fora do escopo do short...
unsigned short bitsBaixos(int valor)
{
	return valor;
}
