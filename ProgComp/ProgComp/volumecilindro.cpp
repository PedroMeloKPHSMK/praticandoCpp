#include <iostream>
#include <cmath>
using namespace std;

void VolumeCilindro();

int main()
{
	system("chcp 1252 > nul");
	cout << "Calcule o volume do cilindro." << endl;
	cout << "-----------------------------" << endl;
	VolumeCilindro();
}

void VolumeCilindro()
{
	double raio, altura, volume, pi;
	cout << "Entre com o raio da base: ";
	cin >> raio;
	cout << "Entre com a altura: ";
	cin >> altura;

	pi = 3.141592;
	raio = sqrt(raio);
	volume = pi * altura * raio;
	cout << "O volume do cilindro é de " << volume;
}