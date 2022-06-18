#include <iostream>
using namespace std;

void (*onClick)(void);

void CreateButton(int x, int y, void (*f)(void))
{
	cout << "Botão criado na posição " << x << ", " << y;
	onClick = f;
}

void Mensagem()
{
	cout << "Botão pressionado!" << endl;
}

int main()
{
	CreateButton(10, 10, Mensagem);
	cout << "Pressionar Botão? ";
	char resposta;
	cin >> resposta;
	if (resposta == 's' || resposta == 'S')
	{
		onClick();
	}
}