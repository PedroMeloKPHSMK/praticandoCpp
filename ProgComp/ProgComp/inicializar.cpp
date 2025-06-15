#include <iostream>
#include <cstdlib>
using namespace std;

void Inicializar();
void ligar();
void verificar();
void ativar();

int main()
{
	system("chcp 1252 > nul");
	cout << "Inicializando Sistema:" << endl;
	Inicializar();
}

void Inicializar()
{
	double x;
	ligar();
	verificar();
	ativar();
	cout << "Inicializa��o conclu�da" << endl << endl;
	srand(time(NULL));
	x = rand();
	if (x > 16384)
		cout << "Sistema em funcionamento.";
	else
		cout << "Falha na inicializa��o";
}

void ligar()
{
	cout << "- Ligando dispositivos" << endl;
}

void verificar()
{
	cout << "- Verificando integridade" << endl;
}

void ativar()
{
	cout << "- Ativando processos" << endl;
}