#include <iostream>
using namespace std;

int main(){
	int ano,resto;
	setlocale(LC_ALL,"Portuguese");
	cout<< "Digite um ano";
	cin>>ano;
	resto = ano % 4;
	if (resto == 0){
		cout<<"ano bissexto";
	} else{
		cout<< "não é um ano bissexto";
	}
	
	return 0;
	
}
