#include <iostream>
using namespace std;

int main (){
	int inicio, fim;
	int soma = 0;
	
	cout << "digite o n�mero inicial";
	cin >> inicio;
	cout << "digite o n�mero final";
	cin >> fim;
	
	if (inicio % 2 != 0) {
		inicio++;
	}
	
	for( int i = inicio; i <= fim; i += 2){
		soma+= 1;
	}
	cout<<"\nA soma dos n�meros pares no intervalo de " << inicio << "a" << fim <<"�:"<< soma << endl;
	
	return 0;
}
