#include <iostream>
#include <cmath>
using namespace std;

void formula();

int main()
{
	system("chcp 1252 > nul");
	cout << "Dados dois pontos P e Q, qual a dist�ncia deles utilizando a formula da dist�ncia?" << endl;
	formula();
}

void formula()
{
	double px, py, qx, qy, width, height, pwr1, pwr2, square;
	cout << "Ponto P:";
	cin >> px >> py;
	cout << "Ponto Q:";
	cin >> qx >> qy;

	width = qx - px;
	height = qy - py;

	pwr1 = pow(width, 2);
	pwr2 = pow(height, 2);

	square = pwr1 + pwr2;
	square = sqrt(square);

	cout << "A dist�ncia entre P e Q �: " << square << endl;
}