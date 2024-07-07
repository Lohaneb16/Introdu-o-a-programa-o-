#include <iostream>
using namespace std;

int main (){
	int inicio, fim;
	int soma = 0;
	
	cout << "digite o número inicial";
	cin >> inicio;
	cout << "digite o número final";
	cin >> fim;
	
	if (inicio % 2 != 0) {
		inicio++;
	}
	
	for( int i = inicio; i <= fim; i += 2){
		soma+= 1;
	}
	cout<<"\nA soma dos números pares no intervalo de " << inicio << "a" << fim <<"é:"<< soma << endl;
	
	return 0;
}
