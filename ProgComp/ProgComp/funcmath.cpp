// exemplo do uso de fun��es
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	
	cout << "Digite a �rea da sua casa em metros quadrados: ";
	double area;
	cin >> area;

	double lado;
	lado = sqrt(area); // chamada da fun��o sqrt

	cout << "Isso � o equivalente a um quadrado com " << lado << " metros de lado." << endl;
	system("pause"); // chamada da fun��o system
}