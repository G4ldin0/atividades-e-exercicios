#include <iostream>
using namespace std;

int main()
{
	long long primo{};


	int i = 1; //deixei o valor do contador depois, porque vou precisar do valor pra exibir
	for (i; primo < 10001; i++) //loop que come�a no contador e so termina quando o tanto de numero primo for 10001
	{
		int num = 0; //contador de divisores
		for (int j = i; j > 0; j--) //loop que verifica os divisores do valor
		{
			if ((i % j) == 0)
			{
				num++;
			}
		}

		if (num <= 2) primo++; //se tiver menos que 2 divisores, � primo;
	}
	
	//output
	cout << "O 10001� n�mero primo � " << i;

}