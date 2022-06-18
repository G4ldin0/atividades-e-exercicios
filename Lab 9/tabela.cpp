#include <iostream>
using namespace std;

void tabela(int, int, int); // criei uma função com couts, para poupar linhas no código.

int main()
{
	//variaveis iniciais dadas na questão. Tive que inicializar elas antes, devido a função.
	int a = 0;
	int b = 0;
	int c = 0;

	//esse é o mesmo comando da função, só que não consegui fazer com que ela mostrasse numeros nesse caso inicial, portanto deixei separado :/
	cout.width(5); cout << left; cout << 'a';
	cout.width(5); cout << "  b  ";
	cout.width(5); cout << right; cout << 'c';
	cout << endl;

	//as operações estão seguidas do cout, para mostrar a mudança de cada linha
	a = 1 + 2;
	tabela(a, b, c); // veja que é preciso mostrar as 3 variaveis em cada linha, e se não houver a inicialização, não seria possível fazer isso.
	b = 1 + a;
	tabela(a, b, c);
	c = 1 % 5;
	tabela(a, b, c);
	a = a + 2;
	tabela(a, b, c);
	b = a - c;
	tabela(a, b, c);
	b = 5 * c / 2; //neste caso especifico não será mostrado o valor correto, já que as variaveis estão no tipo inteiro e não flutuante.
	tabela(a, b, c); 
}

void tabela(int a, int b, int c)
{
	//um padrãozinho bonito para mostrar a tabela ^^
	cout.width(2); cout << left; cout << a;
	cout.width(5); cout << "  " << b << "  ";
	cout.width(5); cout << right; cout << c;
	cout << endl;
}