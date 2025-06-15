#include <iostream>
using namespace std;

int main()
{
	// alterando o código de página silenciosamente
	system("chcp 1252 > nul");

	// exibindo uma frase que contém acentos
	cout << "Acentuação é possível?" << endl;
	cout << "Digite uma palavra com acentuação e descubra: " << endl;

	// leia uma palavra que contém acentos
	char palavra[40];
	cin >> palavra;

	// exibindo o que foi dito
	cout << "A palavra digitada foi " << palavra << endl;
}