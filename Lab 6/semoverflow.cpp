#include <iostream>

int main()
{
	short x = 32767;
	std::cout << "x = " << x << std::endl;

	int y = 2'147'483'647;
	std::cout << "y = " << y << std::endl;
	/*retirei os valores de incremento do x e do y, de forma que eles preservem o valor original(no caso do x)
	e deixando apenas o valor acrescentado(no caso do y), dessa forma, quando eles são mostrados no cout,
	não há overflow.
	*/
	return 0;
}