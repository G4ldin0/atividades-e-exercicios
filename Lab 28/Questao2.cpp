#include <iostream>
using namespace std;

struct tupla
{
	int a;
	int b;
	int c;
};

ostream& operator<< (ostream& os, tupla n)
{
	os << n.a << " " << n.b << " " << n.c;
	return os;
}

inline void inverter(tupla& a, tupla& b)
{
	tupla temp{};
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	tupla A = { 15, 20, 25 };
	tupla B = { 40, 50, 60 };
	cout << "Tupla A: " << A << endl;
	cout << "Tupla B: " << B << endl;

	cout << endl;
	cout << "Invertendo..." << endl;
	inverter(A, B);
	cout << endl;

	cout << "Tupla A: " << A << endl;
	cout << "Tupla B: " << B << endl;

}