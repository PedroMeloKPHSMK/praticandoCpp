#include <iostream>
using namespace std;

//------------------------
//prot�tipos

void feliz(void);
void natal(void);
void anonovo(void);

//------------------------
//fun��o principal

int main()
{
	cout << "Eu desejo a todos um ";
	feliz();
	natal();
	cout << "e um ";
	feliz();
	anonovo();
	cout << endl;

	return 0;
}

//------------------------
//defini��es das fun��es auxiliares

void feliz()
{
	cout << "Feliz ";
}

void natal()
{
	cout << "Natal ";
}

void anonovo()
{
	cout << "Ano Novo! ";
}