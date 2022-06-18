#include <iostream>
using namespace std;



int locate(int* inicio, int* fim, int elemento)
{
	int temp{};

	for (int* i = inicio; i < fim && *i < elemento && *i != 0; i++) //passa por todos os elementos do vetor e verifica quais s�o os diferentes de 0 e menores que o declarado
	{
		temp++; //conta quais s�o menores
	}

	return temp;
}



bool openSpace(int* inicio, int* fim, int pos)
{
	if (*(fim-1) == 0) //se tiver espa�o no final do vetor
	{
		if (*(inicio + pos) == 0) //facilita o processo pois evita processos desnecess�rios caso o espa�o ja esteja livre
			return true;
		else {
			for (int* i = fim - 1; i >= inicio && i - inicio >= pos; i--) //passa do ultimo elemento at� o primeiro e puxa pra frente em cada etapa
			{
				*i = *(i - 1);
			}
			*(inicio + pos) = 0; //e esvazia a posi��o final

			return true;
		}
	}
	else
		return false; //caso contrario retorna falso
}

int main()
{
	int* lista = new int[10]{};
	int ordenada[10]{};


	//input
	cout << "entre com os elementos: ";
	for (char i = 0; i < 10; i++)
	{
		cin >> lista[i];
	}


	for (char i = 0; i < 10; i++)
	{
		int pos = locate(ordenada, ordenada + 10, lista[i]);
		if(openSpace(ordenada, ordenada + 10, pos)) //se a fun��o funcionar normalmente = tiver espa�o no final do vetor
			ordenada[pos] = lista[i]; //indexa o valor do primeiro vetor para o segundo
	}

	delete[] lista;

	//output
	cout << "Os valores ordenados: \n";
	for (char i = 0; i < 10; i++) cout << ordenada[i] << " ";
}