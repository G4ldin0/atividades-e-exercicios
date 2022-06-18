#include <iostream>
#include <string>
using namespace std;

int main()
{
	string datas[3]; //vetor de vetores :D
	cout << "quais são as suas datas comemorativas preferidas?\n";
	getline(cin, datas[0]); //pegando as possíveis palavras compostas, coloquei só 3 pra
	getline(cin, datas[1]);
	getline(cin, datas[2]);
	cout << datas[0] << " " << datas[1] << " e " << datas[2] << " são belas festas!" << endl;
	for (short i = 0; i < 3; i++) //conferindo em cada uma delas se tem a palavra natal
	{
		if (datas[i] == "Natal" || "natal")
		{
			cout << "O natal também é uma das minhas datas preferidas!";
		}
	}
}