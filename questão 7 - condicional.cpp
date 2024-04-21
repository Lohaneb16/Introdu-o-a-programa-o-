#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	float valor;
	cout<<"Informe um valor de investimento";
	cin>>valor;
	
	if (valor > 10000)
		cout<<"Investimento Alto:";		
	else
		cout<<"Investimento Baixo:";			
		
	return 0;
}
