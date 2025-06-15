#include <iostream>
#include <cmath>
using namespace std;

double media(double a, double b, double c, double d);

int main()
{
	double quant;
	quant = media(10,8,6,4); // chamada da função
	cout << "Resultado = " << quant << endl;
}

double media(double a, double b, double c, double d)
{
	//media aritimética entre a, b, c e d
	double m = (a + b + c + d) / 4;
	return m;
}