#include <iostream>
#include <fstream>
using namespace std;

union senha
{
	char alfanumerica[10];
	int numerica;
};

int main()
{
	setlocale(LC_ALL, "portuguese");

	ifstream fin;
	ofstream fout;

	char ch{};
	int tipo{};

	senha usuario;


	cout << "Deseja exibir a senha [A] ou criar uma nova [B]: \n[ ]\b\b";
	cin >> ch;

	fin.open("senhas.dat", ios_base::in | ios_base::binary);
	switch (ch)
	{
	case 'a':
	case 'A':
		if (!fin.is_open())
		{
			cout << "Arquivo não encontrado!\n";
			return EXIT_FAILURE;
			system("pause");
		}
		else
		{
			fin.read((char*)& tipo, sizeof(char));
			switch (tipo)
			{
			case 1:
				fin.read((char*)& usuario, sizeof(usuario.alfanumerica));
				cout << usuario.alfanumerica << endl;
				break;
			case 2:
				fin.read((char*)& usuario, sizeof(usuario.numerica));
				cout << usuario.numerica << endl;
				break;
			}
		}
		break;
	case 'b':
	case 'B':
		fout.open("senhas.dat", ios_base::out | ios_base::trunc | ios_base::binary);
		cout << "Tipo de senha: [1] alfanumerico \n [2]numerico\n";
		cin >> tipo;
		switch (tipo)
		{
		case 1:
			fout.write((char*)& tipo, 1);
			cin >> usuario.alfanumerica;
			fout.write((char*)& usuario, sizeof(usuario.alfanumerica));
			break;
		case 2:
			fout.write((char*)& tipo, 1);
			cin >> usuario.numerica;
			fout.write((char*)& usuario, sizeof(usuario.numerica));
			break;
		}
		break;
	}
	fin.close();
	fout.close();
}