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
	//precisei definir o primeiro elemento do vetor na variavel temporária para ter algo para comparar
	elementos temp{ 0, *inicio, 0, *inicio};

	for (int* i = inicio + 1; i < fim; i++) //em cada elemento do vetor, testa se é o maior ou menor
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
		cout << "arquivo não encontrado.";
		exit(EXIT_FAILURE);
	}

	//fecha e abre o mesmo arquivo, pra pegar os números novamente
	fin.close();
	fin.open(nome);
	int* lista = new int[i]{}; //define o vetor com o tamanho necessário para guardar todos os valores
	for (int cont = 0; cont < i; cont++) fin >> lista[cont]; //e entra com os valores para o vetor

	fin.close();

	elementos listados = encontrados(lista, lista + i); //chama a função pra encontrar os elementos específicos
	
	
	//output
	cout << "A posição " << listados.posicaoMenor << " contém o menor número (" << listados.menor << ")\n"
			"A posição " << listados.posicaoMaior << " contém o menor número (" << listados.maior << ")";

}