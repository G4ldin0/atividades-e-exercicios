#include <iostream>
using namespace std;

int main()
{
	short* pnt = new short[10]{ 46, 78, 40, 96, 74, 58, 32, 56, 91, 6 }; //ponteiro de vetor de inteiros
	
	for (short i = 0; i < 10; i+=2) //loop que passa a cada 2 endereços do vetor
	{
		short* p1 = (pnt + i); //p1 recebe o endereço equivalente ao i atual
		short* p2 = (pnt + i + 1); //p2 recebe o par de p1

		cout << "[" << *p1 << "," << *p2 << "]"; //modelo de output
	}
}