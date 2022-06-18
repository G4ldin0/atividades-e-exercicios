#include <iostream>
using namespace std;

int main()
{
	//declaração de variaveis
	int entrada[3]{};
	int* in1 = new int{};
	int* in2 = new int{};

	//entrada do usuário
	cout << "Digite um número inteiro: ";
	cin >> *in1;
	cout << "Digite outro número inteiro: ";
	cin >> *in2;

	//processamento: encontra o menor valor e guarda na variavel
	* in1 < * in2 ? (entrada[0] = *in1, entrada[1] = *in2) : (entrada[0] = *in2, entrada[1] = *in1); 
	/*em pesquisas sobre a linguagem, descobri que existe o operator- ?
	* que pega uma condicional, e retorna um valor para caso verdadeiro, e outro para falso
	*/

	//deleta ambos os vetores, já que não serão mais utilizados
	delete in1;
	delete in2;

	//loop que vai do menor ao maior e soma os valores entre eles
	for (int i = entrada[0] + 1 /* + 1 pra não pegar o menor valor*/; i < entrada[1]; i++) entrada[2] += i;
	

	//saida de dados
	cout << "A soma de todos os valores entre " << entrada[0] << " e " << entrada[1] << " : " << entrada[2];
}