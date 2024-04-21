#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	int dia;
	cout<<"Informe o dia da semana [1-7]";
	cin>>dia;
	switch(dia) {
		case 1:		
		case 2:
		case 3:
		case 4:
		case 5:
			cout<<"Dia Útil"<<endl;
		case 6:
		case 7:
			cout<<"Fim de Semana"<<endl;			
		default:
			cout<<"Dia inválido!"<<endl;
	}
	return 0;
}

