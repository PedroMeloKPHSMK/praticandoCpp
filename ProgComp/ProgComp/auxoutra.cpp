#include <iostream>
using namespace std;

void auxiliar(void);
void outra(void);

int main()
{
	system("chcp 1252 > nul");

	cout << "Um programa em C++, " << "sempre come�a pela " << "fun��o main.\n";

	outra();
	auxiliar();

	cout << "mais de uma vez.\n";
	return 0;
}

void auxiliar()
{
	cout << "Fun��es tamb�m podem " << "ser invocadas ";
}

void outra()
{
	cout << "Fun��es podem ser " << "invocadas a partir " << "da fun��o main.\n";

	auxiliar();

	cout << "a partir de " << "outras fun��es.\n";
}