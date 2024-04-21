#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	int codigo;
	cout<<"Informe o código do produto";
	cin>>codigo;
	if (codigo >= 1 && codigo <= 10) {
		cout<<"Alimentação"<<endl;
	}
	if (codigo >=11 && codigo <= 20) {
		cout<<"Limpeza"<<endl;		
	}
	if (codigo >=21 && codigo <= 30) {
		cout<<"Eletrônicos"<<endl;		
	}		
	return 0;
}
