#include <iostream>
#include <fstream>
using namespace std;

struct par {
	int x;
	int y;
};

ostream& operator<< (ostream& os, par& a)
{
	os << '[' << a.x << ',' << a.y << ']';
	return os;
}
istream& operator>> (istream& is, par& a)
{
	is >> a.x;
	is.ignore();
	is >> a.y;
	return is;
}


int main()
{
	ifstream fin;
	par a;
	fin.open("pares.txt");
	while (!fin.eof())
	{
		fin >> a;
		cout << a << ' ';
	}
}