#include <iostream>
#include <cmath>
using namespace std;

void flex�o(int); // prot�tipo da fun��o flex�o

int main()
{
	system("chcp 1252 > nul");
	flex�o(3); // chama a fun��o flex�o
	cout << "Escolha um n�mero inteiro: ";
	int cont;
	cin >> cont;
	flex�o(cont); // chama a fun��o flex�o novamente
	return 0;
}

void flex�o(int n)
{
	cout << "Fa�a " << n << " flex�es." << endl;
}