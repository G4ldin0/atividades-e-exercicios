#include <iostream>
using namespace std;

void tabela(int, int, int); // criei uma fun��o com couts, para poupar linhas no c�digo.

int main()
{
	//variaveis iniciais dadas na quest�o. Tive que inicializar elas antes, devido a fun��o.
	int a = 0;
	int b = 0;
	int c = 0;

	//esse � o mesmo comando da fun��o, s� que n�o consegui fazer com que ela mostrasse numeros nesse caso inicial, portanto deixei separado :/
	cout.width(5); cout << left; cout << 'a';
	cout.width(5); cout << "  b  ";
	cout.width(5); cout << right; cout << 'c';
	cout << endl;

	//as opera��es est�o seguidas do cout, para mostrar a mudan�a de cada linha
	a = 1 + 2;
	tabela(a, b, c); // veja que � preciso mostrar as 3 variaveis em cada linha, e se n�o houver a inicializa��o, n�o seria poss�vel fazer isso.
	b = 1 + a;
	tabela(a, b, c);
	c = 1 % 5;
	tabela(a, b, c);
	a = a + 2;
	tabela(a, b, c);
	b = a - c;
	tabela(a, b, c);
	b = 5 * c / 2; //neste caso especifico n�o ser� mostrado o valor correto, j� que as variaveis est�o no tipo inteiro e n�o flutuante.
	tabela(a, b, c); 
}

void tabela(int a, int b, int c)
{
	//um padr�ozinho bonito para mostrar a tabela ^^
	cout.width(2); cout << left; cout << a;
	cout.width(5); cout << "  " << b << "  ";
	cout.width(5); cout << right; cout << c;
	cout << endl;
}