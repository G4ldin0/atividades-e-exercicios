#include <iostream>
using namespace std;

struct controller
{
	char name[40];
	int button;
	int axis;
};

void enumerate(void (*f) (controller))
{
	controller vet[] =
	{
		{"Joy", 8, 4},
		{"Xbox", 10, 3},
		{"Play",8, 6}
	};
	for (auto i : vet)
		f(i);
}

void ListarNomes(controller a)
{
	cout << a.name;
}

void ListarEixos(controller a)
{
	cout << a.axis;
}

int main()
{
	cout << "\nNome: ";
	enumerate(ListarNomes);
	cout << "\nEixos: ";
	enumerate(ListarEixos);
}