#include <iostream>
#include <string>
using namespace std;

int main()
{
	string datas[3]; //vetor de vetores :D
	cout << "quais s�o as suas datas comemorativas preferidas?\n";
	getline(cin, datas[0]); //pegando as poss�veis palavras compostas, coloquei s� 3 pra
	getline(cin, datas[1]);
	getline(cin, datas[2]);
	cout << datas[0] << " " << datas[1] << " e " << datas[2] << " s�o belas festas!" << endl;
	for (short i = 0; i < 3; i++) //conferindo em cada uma delas se tem a palavra natal
	{
		if (datas[i] == "Natal" || "natal")
		{
			cout << "O natal tamb�m � uma das minhas datas preferidas!";
		}
	}
}