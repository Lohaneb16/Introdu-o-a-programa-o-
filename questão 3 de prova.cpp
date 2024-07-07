#include <iostream>
using namespace std;

int main() {
	int idade;
	float peso;
	int dosagem_gotas;
	
	cout<< "digite a idade";
	cin>> idade;
	
	cout<< "digite o peso";
	cin >> peso;
	
	if (idade >= 12){
		if (peso >=60){
			dosagem_gotas = 40;
		} else {
			dosagem_gotas = 30;
		}
	} else {
		dosagem_gotas = peso / 2;
	}
	cout << "\nDosagem recomendada:" << dosagem_gotas << "gotas" << endl;
	
	return 0;
}
