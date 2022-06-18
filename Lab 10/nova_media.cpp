#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	//variaveis
	short peso[3] = { 2, 3, 4 };
	float nota[3];
	float media[2]; //precisa ser em float, pra guardar os decimais! quase esquecia
	cout << "Digite o valor das notas: ";
	cin >> nota[0] >> nota[1] >> nota[2];

	cout.precision(2);//pra pegar só dois decimais
	media[0] = (nota[0] + nota[1] + nota[2]) / 3.0; //media aritmetica
	media[1] = (nota[0] * peso[0] + nota[1] * peso[1] + nota[2] * peso[2]) / (peso[0] + peso[1] + peso[2]);//media com peso
	cout << "\nMedia antiga: " << media[1];
	cout << "\nMédia nova: " << media[0];
}