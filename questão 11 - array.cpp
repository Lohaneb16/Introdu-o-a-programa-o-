#include <iostream>
using namespace std;

int main() {
    int tamanho;
    
    cout << "Digite o n�mero de elementos ";
    cin >> tamanho;
    
    double array[tamanho];
    double soma = 0.0;

    cout << "Digite os elementos\n";
    for (int i = 0; i < tamanho; i++) {
        cin >> array[i];
        soma += array[i]; 
    }
    
    double media = soma / tamanho;
    
    cout << "A m�dia dos elementos do array �: " << media << endl;
    
    return 0;
}

