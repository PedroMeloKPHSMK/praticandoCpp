#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	srand(time(NULL));
	int num = rand();
	cout << "Gerando número... " << endl << "Resultado: " << num << endl;
	if (num > 16834)
		cout << "Grande" << endl;
	else
		cout << "Pequeno" << endl;
}