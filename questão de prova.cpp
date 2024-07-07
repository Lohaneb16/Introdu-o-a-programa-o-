#include <iostream>
#include <clocale>
using namespace std;

int main() {
	float peso;
	cout<< "qual o seu peso?";
	cin>> peso;
	cout<< "agua" << peso*0,05 << "litros" << endl;
	cout<< "carbo" <<peso*0,006 << "1"<< endl;
	cout << "prot" <<peso*0,0025 << "kg" << endl;
	return 0;
	}
