#include <iostream>
using namespace std;

void (*onClick)(void);

void CreateButton(int x, int y, void (*f)(void))
{
	cout << "Bot�o criado na posi��o " << x << ", " << y;
	onClick = f;
}

void Mensagem()
{
	cout << "Bot�o pressionado!" << endl;
}

int main()
{
	CreateButton(10, 10, Mensagem);
	cout << "Pressionar Bot�o? ";
	char resposta;
	cin >> resposta;
	if (resposta == 's' || resposta == 'S')
	{
		onClick();
	}
}