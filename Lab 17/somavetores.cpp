#include <iostream>
using namespace std;

void exibirvetor(short a[])
{
	for (char i = 0; i <= sizeof(a)/sizeof(short); i++)
	{
		cout << a[i] << " ";
	}
}

short* soma(short a[], short b[])
{
	short* temp = new short[(sizeof(a) / sizeof(short))]{};
	for (char i = 0; i <= sizeof(a) / sizeof(short); i++)
	{
		temp[i] = a[i] + b[i];
	}

	return temp;
}


int main()
{
	short* A = new short[5]{};
	short* B = new short[5]{};
	short* S = new short[5]{};

	cout << "Digite 10 valores:\n";

	for (char i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			cin >> A[i];
		}
		else
		{
			cin >> B[i - 5];
		}
	}
	
	cout << "Vetor A: ";
	exibirvetor(A);
	cout << endl;
	cout << "Vetor B: ";
	exibirvetor(B);
	cout << endl;

	S = soma(A, B);

	cout << "Vetor S: ";
	exibirvetor(S);

}