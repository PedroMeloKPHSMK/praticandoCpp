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
	cout << "O horário está errado." << endl << "O horário atual será ";
	cout << horas + 1 << ch << mins;

}