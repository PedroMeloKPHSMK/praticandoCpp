// declarando, definindo e chamando uma fun��o
#include <iostream>
using namespace std;

void simples(); // prot�tipo da fun��o

int main()
{
	system("chcp 1252 > nul");

	cout << "main () vai chamar a fun��o simples (): \n";
	simples(); // chamada da fun��o

	return 0;
}

void simples() // defini��o da fun��o
{
	cout << "Eu sou uma fun��o simples" << endl;
}