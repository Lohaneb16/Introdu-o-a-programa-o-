#include<iostream>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	float valor1, valor2, media;
	cout<<"informe o primeiro valor";
	cin>>valor1;
	cout<<"informe o segundo valor";
	cin>>valor2;
	media=(valor1*40 + valor2*60)/100;
	cout<<"a média ponderada é"<<media;
	return 0;
	
}
