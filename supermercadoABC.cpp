#include <iostream>
using namespace std;

//constantes preços
const float alface = 1.25f;
const float beterraba = 0.65f;
const float cenoura = 0.9f;


//função pra mostrar os produtos
void exibir_produtos()
{
	cout << "Supermercado ABC\n";
	cout << "----------------\n";


	cout << fixed;  cout.precision(2); //formatação

	cout.width(20); cout << left;
	cout << "a) Alface";
	cout << "R$" << alface << "/Kg";
	cout << endl;

	cout.width(20); cout << left;
	cout << "b) Beterraba";
	cout << "R$" << beterraba << "/Kg";
	cout << endl;

	cout.width(20); cout << left;
	cout << "c) Cenoura";
	cout << "R$" << cenoura << "/Kg";
	cout << endl;
	cout << endl;
}

//função que mostra o carrinho atual
void carrinho(float* entrada)
{
	cout << "Atualmente no carrinho: \n";
	cout << "-----------------------\n";


	cout.width(20); cout << left;
	cout << "a) Alface: " << *entrada << "Kg\n";
	cout.width(20); cout << left;
	cout << "b) Beterraba: " << *(entrada+1) << "Kg\n";
	cout.width(20); cout << left;
	cout << "c) Cenoura: " << *(entrada+2) << "Kg\n";


	cout << "Faça seu pedido usando as letras (a, b, c) e finalize com (s): ";
}

//resultado do carrinho
void TotalParcial(float* entrada)
{
	cout << endl;

	cout.width(15); cout << left; cout << "Produto";
	cout.width(15); cout << left; cout << "Preço/Kg";
	cout.width(15); cout << left; cout << "Pedido (Kg)";
	cout.width(15); cout << left; cout << "Total Parcial";


	cout << endl;


	cout.width(15); cout << left; cout << "----------";
	cout.width(15); cout << left; cout << "-----------";
	cout.width(15); cout << left; cout << "-------------";
	cout.width(15); cout << left; cout << "--------------";


	cout << endl;


	cout.width(15); cout << left; cout << "Alface";
	
	cout.width(2); cout << left; cout << "R$";
	cout.width(5); cout << right; cout << alface; 
	cout.width(8); cout << left; cout << "/Kg";

	cout.width(5); cout << left; cout << *entrada;
	cout.width(10); cout << left; cout << "Kg";

	cout.width(2); cout << left; cout << "R$";
	cout.width(5); cout << right; cout << alface * *entrada;
	cout.width(8); cout << left; cout << "/Kg";

	
	cout << endl;


	cout.width(15); cout << left; cout << "Beterraba";

	cout.width(2); cout << left; cout << "R$";
	cout.width(5); cout << right; cout << beterraba;
	cout.width(8); cout << left; cout << "/Kg";

	cout.width(5); cout << left; cout << *(entrada+1);
	cout.width(10); cout << left; cout << "Kg";

	cout.width(2); cout << left; cout << "R$";
	cout.width(5); cout << right; cout << beterraba * *(entrada+1);
	cout.width(8); cout << left; cout << "/Kg";


	cout << endl;


	cout.width(15); cout << left; cout << "Cenoura";

	cout.width(2); cout << left; cout << "R$";
	cout.width(5); cout << right; cout << cenoura;
	cout.width(8); cout << left; cout << "/Kg";

	cout.width(5); cout << left; cout << *(entrada + 2);
	cout.width(10); cout << left; cout << "Kg";

	cout.width(2); cout << left; cout << "R$";
	cout.width(5); cout << right; cout << cenoura * *(entrada + 2);
	cout.width(8); cout << left; cout << "/Kg";


	cout << endl;
	cout << ("-----------------------------------------------------------");

	cout << endl;
	cout << endl;


}

//valor final
void total(float total, float desconto, float entrega)
{
	cout.width(30); cout << left; cout << "Total do pedido: ";
	cout << "R$" << total;
	cout << endl;

	cout.width(32); cout << left; cout << "Descontos: ";
	cout << desconto << "%";
	cout << endl;

	cout.width(30); cout << left; cout << "Custos de entrega: ";
	cout << "R$" << entrega;
	cout << endl;

	cout << "\n-------------------------------------\n";

	cout.width(30); cout << left; cout << "Total a pagar: ";
	cout << "R$" << total - (total * (desconto / 100)) + entrega;
}


int main()
{
	float* usuario = new float[3]{}; //vetor que guarda as informações do carrinho

	exibir_produtos(); //chamada das funções
	carrinho(usuario);

	char in{}; //entrada do usuario
	do //loop que repete enquanto a entrada for diferente de s
	{
		cin >> in;
		cout << endl;
		switch (in) //todos os casos possiveis
		{
		case 'a':
		case 'A':
			cout << "Alface: ";
			cin >> usuario[0];

			break;
		case 'b':
		case 'B':
			cout << "Beterraba: ";
			cin >> usuario[1];
			break;
		case 'c':
		case 'C':
			cout << "Cenoura: ";
			cin >> usuario[2];
			break;
		case 's': //caso vazio em s pra evitar erros de interface
			cout << endl;
			break;
		default:
			cout << "Entrada incorreta!\n";
			continue; //quando entra num caso extraordinario, volta ao inicio do loop.
		}

		system("cls"); //limpa a tela e mostra os produtos e o carrinho atualmente.
		exibir_produtos();
		carrinho(usuario);
	}
	while (in != 's');


	system("cls");
	TotalParcial(usuario);


	//calculando os valores finais
	float valor = (alface * usuario[0]) + (beterraba * usuario[1]) + (cenoura * usuario[2]);

	float peso = usuario[0] + usuario[1] + usuario[2];

	float desconto = 0;
	if (valor > 100) 
		desconto = 5;

	float entrega = 0;
	if (peso < 5 && peso > 0)
		entrega = 3.5f;
	else if (peso < 20 && peso >= 5)
		entrega = 10.0f;
	else if (peso >= 20)
		entrega = 8.0f + (0.10f * int(peso));

	//chamada da função final
	total(valor, desconto, entrega);

	//deletando os ponteiros utilizados;
	delete[] usuario;

}