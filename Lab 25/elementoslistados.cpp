#include <iostream>
#include <fstream>
using namespace std;

struct elementos
{
	int posicaoMaior;
	int maior;
	int posicaoMenor;
	int menor;
};

elementos encontrados(int inicio[], int fim[])
{
	//precisei definir o primeiro elemento do vetor na variavel tempor�ria para ter algo para comparar
	elementos temp{ 0, *inicio, 0, *inicio};

	for (int* i = inicio + 1; i < fim; i++) //em cada elemento do vetor, testa se � o maior ou menor
	{
		if (*i > temp.maior)
		{
			temp.maior = *i;
			temp.posicaoMaior = i - inicio;
		}
		else if (*i < temp.menor)
		{
			temp.menor = *i;
			temp.posicaoMenor = i - inicio;
		}
	}

	return temp;
}

int main()
{
	//define o objeto de entrada e o nome do arquivo
	fstream fin;
	char nome[15]{};
	cout << "nome do arquivo: ";
	cin >> nome;
	fin.open(nome);

	//verifica se o arquivo existe, e, se sim, conta quantos numeros existem.
	int i = 0;
	if (fin.is_open()) 
	{
		do
		{
			fin.get();
			i++;
		} while (!fin.eof());
	}
	else
	{
		cout << "arquivo n�o encontrado.";
		exit(EXIT_FAILURE);
	}

	//fecha e abre o mesmo arquivo, pra pegar os n�meros novamente
	fin.close();
	fin.open(nome);
	int* lista = new int[i]{}; //define o vetor com o tamanho necess�rio para guardar todos os valores
	for (int cont = 0; cont < i; cont++) fin >> lista[cont]; //e entra com os valores para o vetor

	fin.close();

	elementos listados = encontrados(lista, lista + i); //chama a fun��o pra encontrar os elementos espec�ficos
	
	
	//output
	cout << "A posi��o " << listados.posicaoMenor << " cont�m o menor n�mero (" << listados.menor << ")\n"
			"A posi��o " << listados.posicaoMaior << " cont�m o menor n�mero (" << listados.maior << ")";

}