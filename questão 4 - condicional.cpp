#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	int codigo;
	cout<<"Informe o c�digo do produto";
	cin>>codigo;
	if (codigo >= 1 && codigo <= 10) {
		cout<<"Alimenta��o"<<endl;
	}
	if (codigo >=11 && codigo <= 20) {
		cout<<"Limpeza"<<endl;		
	}
	if (codigo >=21 && codigo <= 30) {
		cout<<"Eletr�nicos"<<endl;		
	}		
	return 0;
}
