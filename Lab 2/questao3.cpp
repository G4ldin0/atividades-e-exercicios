#include <iostream>
using namespace std;

int main() {

	system("chcp 1252 > nul");

	cout << endl;
	cout << left; cout.width(15); cout << "Produto";
	cout.width(15); cout << "Preço / Kg"; 
	cout.width(15); cout << "Pedido (Kg)";
	cout.width(15); cout << "Total Parcial" 
	<< endl;

	cout.width(15); cout << "-------";
	cout.width(15); cout << "----------";
	cout.width(15); cout << "----------";
	cout.width(15); cout << "-------------" 
	<< endl;

	cout.width(15); cout << "Alface";
	cout.width(15); cout << "R$1,25/Kg";
	cout.width(15); cout << "3,2 Kg";
	cout.width(15); cout << "R$ 4,00"
	<< endl;

	cout.width(15); cout << "Beterraba";
	cout.width(15); cout << "R$0,65/Kg";
	cout.width(15); cout << "6,0 Kg";
	cout.width(15); cout << "R$ 3,90"
	<< endl;

	cout.width(15); cout << "Cenoura";
	cout.width(15); cout << "R$0,90/Kg";
	cout.width(15); cout << "10 Kg";
	cout.width(15); cout << "R$ 9,00"
	<< endl;

	return 0;
}