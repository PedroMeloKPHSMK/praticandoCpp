#include <iostream>
#include <cmath>
using namespace std;

int maior(int a, int b);

int maior(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	system("chcp 1252 > nul");
	cout << "Digite dois números: ";
	int num1, num2;
	cin >> num1 >> num2;
	cout << "O maior deles é " << maior(num1, num2) << endl;
}