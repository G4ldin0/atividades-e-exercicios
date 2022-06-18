#include <iostream>
#include <cstdlib>

using namespace std;

int inicializar();
void ligar();
void verificar();
void ativar();

void main()
{
	system("chcp 1252 > nul");
	

	//chamando a função e atribuindo o valor de retorno a uma variavel, que vai ser analisada
	int v = inicializar();

	//conferir o valor recebido da função
	if (v > 16384)
	{
		cout << "Sistema em funcionamento!\n";
	}
	else
	{
		cout << "Falha na inicialização\n";
	}

}



int inicializar()
{
	cout << "Inicializando sistema: " << endl;
	cout << "-----------------------" << endl;
	
	ligar();
	verificar();
	ativar();

	cout << endl;

	int valor = rand();

	return valor;
}


//demais funções
void ligar()
{
	cout << "- Ligando dispositivo \n";
}

void verificar()
{
	cout << "- Verificando integridade \n";
}

void ativar()
{
	cout << "- Ativando processos \n";
}