#include <iostream>
using namespace std;

inline void func0()
{
	cout << "\n Inserido!";
}

inline void func1()
{
	cout << "\n Removido!";
}

inline void func2()
{
	cout << "\n Busca realizada!";
}

inline void func3()
{
	system("cls");
}


int main()
{
	void (*funcs[4]) (void) = { func0, func1, func2, func3 };

	int num{};
	cout << "Menu do sistema\n"
		"\n"
		"1) Inserir\n"
		"2) Remover\n"
		"3) Buscar\n"
		"4) Sair\n"
		"\n"
		"Escolha: ";

	cin >> num;
	funcs[num];

}