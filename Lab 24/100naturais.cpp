#include <fstream>
using namespace std;

int main()
{
	ofstream fout_c;
	ofstream fout_b;

	fout_c.open("Cnaturais.txt");
	fout_b.open("Bnaturais.dat", ios_base::out | ios_base::binary);

	for (int i = 1; i <= 100; i++)
	{
		fout_c << i << ' ';
	}

	fout_c.close(); //tamanho final = 292 bytes

	for (int i = 1; i <= 100; i++)
	{
		fout_b.write((char*)& i, sizeof(int));
	}

	fout_b.close(); //tamanho final = 400 bytes
}


//neste caso, o arquivo binario est� com um tamanho maior pois est�o sendo escritos 4 bytes por n�mero, enquanto o arquivo menor est� sendo escrito apenas um byte.