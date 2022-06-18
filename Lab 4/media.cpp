#include <iostream>
#include <cmath>
using namespace std;

//declaração de função media(). definida como float para conter os valores decimais
float media(float v1, float v2);

int main()
{
	system("chcp 1252 > nul");

	//variaveis
	float input1, input2;


	//inputs
	cout << "Digite um valor inteiro : ";
	cin >> input1;

	cout << "Digite outro valor inteiro: ";
	cin >> input2;

	//output. função chamada no meio
	cout << "A média dos números é " << media(input1, input2);
}


float media(float v1, float v2)
{
	//calculo basico de media aritmetica 
	float med = (v1 + v2) / 2;
	return med; //retornar o valor da media, para que ele possa aparecer quando a função for chamada
}