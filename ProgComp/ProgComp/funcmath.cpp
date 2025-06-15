// exemplo do uso de funções
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	
	cout << "Digite a área da sua casa em metros quadrados: ";
	double area;
	cin >> area;

	double lado;
	lado = sqrt(area); // chamada da função sqrt

	cout << "Isso é o equivalente a um quadrado com " << lado << " metros de lado." << endl;
	system("pause"); // chamada da função system
}