#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	cout << "Que horas s�o? " << endl;
	int horas, minutos;

	cout << "Horas: ";
	cin >> horas;
	cout << "Minutos: ";
	cin >> minutos;

	cout << "Agora, s�o " << horas << " horas e " << minutos << " minutos.";
}