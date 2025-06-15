// declarando, definindo e chamando uma função
#include <iostream>
using namespace std;

void simples(); // protótipo da função

int main()
{
	system("chcp 1252 > nul");

	cout << "main () vai chamar a função simples (): \n";
	simples(); // chamada da função

	return 0;
}

void simples() // definição da função
{
	cout << "Eu sou uma função simples" << endl;
}