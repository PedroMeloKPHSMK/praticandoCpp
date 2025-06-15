#include <iostream>
#include <cmath>
using namespace std;

void flexão(int); // protótipo da função flexão

int main()
{
	system("chcp 1252 > nul");
	flexão(3); // chama a função flexão
	cout << "Escolha um número inteiro: ";
	int cont;
	cin >> cont;
	flexão(cont); // chama a função flexão novamente
	return 0;
}

void flexão(int n)
{
	cout << "Faça " << n << " flexões." << endl;
}