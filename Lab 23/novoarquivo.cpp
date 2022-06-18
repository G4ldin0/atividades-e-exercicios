#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	ofstream fout;
	ifstream fin;

	string nome;

	cout << "Nome do arquivo: ";
	cin >> nome;
	
	fout.open(nome + ".cpp");
	
	fout << "#include<iostream>\n"
		<< "using namespace std;\n"
		<< "\n"
		<< "int main(){\n"
		<< "	int num = 5;\n"
		<< "	cout << num << endl;\n"
		<< "	return 0;\n"
		<< "}\n";


	fout.close();
	fout.open(nome + "_m.cpp");
	
	fin.open(nome + ".cpp");

	fout << "//" << nome << ".cpp\n";
	fout << "#define print cout\n";

	for (string entrada; !fin.eof(); fin >> entrada)
	{
		if (entrada == "cout")
		{
			fout << "print";
		}
		else
		{
			fout << entrada << endl;
		}
	}

	fin.close();
	fout.close();

	return 0;
}