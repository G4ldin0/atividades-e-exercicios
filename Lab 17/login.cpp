#include <iostream>
using namespace std;

struct login
{
	char nome[20];
	char senha[20];
};

bool verificar(char entrada[], char objetivo[]) //decidi usar uma função ja que ia usar o mesmo loop mais de uma vez
{//recebe a entrada e o login correto
	bool temp = true;
	for (char i = 0; i < 20; i++) //passa por todos os 20 elementos disponíveis do registro
	{
		if (entrada[i] == objetivo[i]) //se o caracter for igual, entao temp sera correto
			temp = temp && 1;
		else
		{
			temp = temp && 0; //se tiver errado, entao temp vai ser sempre zero 
			//i = 20;
		}
	}
	return temp; //retorna verdadeiro ou falso
}

int main()
{
	login entrada{};
	login adm = { "administrador", "adm123" }; //login adm
	cout << "entre com o seu nome e senha: ";
	cin >> entrada.nome >> entrada.senha;

	bool correto = verificar(entrada.nome, adm.nome) && verificar(entrada.senha, adm.senha); //guardei o valor booleano das duas funções

	if (correto) //mensagem final
		cout << "Login e senha corretos!";
	else
		cout << "Login ou senha incorretos.";
	
	
}