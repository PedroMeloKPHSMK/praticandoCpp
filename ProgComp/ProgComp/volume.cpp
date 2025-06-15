#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	float comprimento, largura, altura;

	cout << "Vamos calcular o volume de um objeto." << endl;
	cout << "Digite o comprimento, a altura e a largura do objeto, respectivamente: " << endl;
	cin >> comprimento >> altura >> largura;

	float volume = comprimento * altura * largura;

	cout << "O volume do objeto é igual a: " << volume << endl;
}