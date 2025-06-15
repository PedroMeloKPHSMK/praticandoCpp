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
	cout << "Inicialização concluída" << endl << endl;
	srand(time(NULL));
	x = rand();
	if (x > 16384)
		cout << "Sistema em funcionamento.";
	else
		cout << "Falha na inicialização";
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