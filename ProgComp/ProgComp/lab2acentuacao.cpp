#include <iostream>
using namespace std;

int main()
{
	// alterando o c�digo de p�gina silenciosamente
	system("chcp 1252 > nul");

	// exibindo uma frase que cont�m acentos
	cout << "Acentua��o � poss�vel?" << endl;
	cout << "Digite uma palavra com acentua��o e descubra: " << endl;

	// leia uma palavra que cont�m acentos
	char palavra[40];
	cin >> palavra;

	// exibindo o que foi dito
	cout << "A palavra digitada foi " << palavra << endl;
}