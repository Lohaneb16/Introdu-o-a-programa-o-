#include <iostream>
#include <locale>

using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	float a, b, c, media;
	cout<<"Informe o primeiro valor:";
	cin>>a;
	cout<<"Informe o segundo valor:";
	cin>>b;
	cout<<"Informe o terceiro valor:";
	cin>>c;	
	media = (a*4 + b*7 + c*3) / 14;
	cout<<"A média ponderada é:"<<media;
	return 0;
}
