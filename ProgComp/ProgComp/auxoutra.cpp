#include <iostream>
using namespace std;

void auxiliar(void);
void outra(void);

int main()
{
	system("chcp 1252 > nul");

	cout << "Um programa em C++, " << "sempre começa pela " << "função main.\n";

	outra();
	auxiliar();

	cout << "mais de uma vez.\n";
	return 0;
}

void auxiliar()
{
	cout << "Funções também podem " << "ser invocadas ";
}

void outra()
{
	cout << "Funções podem ser " << "invocadas a partir " << "da função main.\n";

	auxiliar();

	cout << "a partir de " << "outras funções.\n";
}