#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	float numero;
	cout<<"Informe um número";
	cin>>numero;
	
	if (numero < 20)
		cout<<numero/2;
		
	return 0;
}
