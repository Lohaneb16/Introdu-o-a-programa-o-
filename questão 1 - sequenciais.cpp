
#include <iostream>
#include <locale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	float a, b, media;
	cout<<"Informe o primeiro valor:";
	cin>>a;
	cout<<"Informe o segundo valor:";
	cin>>b;
	media = (a + b) / 2;
	cout<<"A media é:"<<media;
	return 0;
}
