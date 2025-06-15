#include <iostream>
#include <cmath>
using namespace std;

void Absoluto(void);

int main()
{
	system("chcp 1252 > nul");
	cout << "Digite um número inteiro: ";
	Absoluto();
}

void Absoluto(void)
{
	double num, result;
	cin >> num;
	double base;
	base = num;
	result = pow(base,2);
	result = sqrt(result);

	cout << "O valor absoluto é " << result << endl;
}