#include <iostream>
#include <clocale>

using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	int mes;
	cout<<"Informe um número referente a um ";
	cout<<"mês [1-12]";
	cin>>mes;
	switch(mes) {
		case 1:
			cout<<"Janeiro"<<endl;
		case 2:
			cout<<"Fevereiro"<<endl;
		case 3:
			cout<<"Março"<<endl;
			break;
		case 4:
			cout<<"Abril"<<endl;
		case 5:
			cout<<"Maio"<<endl;
		case 6:
			cout<<"Junho"<<endl;
		case 7:
			cout<<"Julho"<<endl;
		case 8:
			cout<<"Agosto"<<endl;
		case 9:
			cout<<"Setembro"<<endl;
		case 10:
			cout<<"Outubro"<<endl;
		case 11:
			cout<<"Novembro"<<endl;
		case 12:
			cout<<"Dezembro"<<endl;
		default:
			cout<<"Mês inválido!"<<endl;
	}
	return 0;
}
