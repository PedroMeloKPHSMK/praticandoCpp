// aula 2 - sobre cabe�alho int main
/* coment�rios podem ser acionados assim */
#include <iostream>
using namespace std;

int main(int argc, char ** argv)
{
	cout << "Programa: " << argv[0] << endl;

	if (argc > 1)
		cout << "Arg: " << argv[1] << endl;

	return 0;
}