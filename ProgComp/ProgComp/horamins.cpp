#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	int horas, mins;
	char ch;

	cout << "Digite a hora: ";
	cin >> horas;
	cin >> ch;
	cin >> mins;
	cout << "O hor�rio est� errado." << endl << "O hor�rio atual ser� ";
	cout << horas + 1 << ch << mins;

}