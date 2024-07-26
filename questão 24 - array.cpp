#include <iostream>
using namespace std;

int main() {
    int tamanho, posicao, elemento;
    
    cout << "Digite o número de elementos no array: ";
    cin >> tamanho;
    
    int array[tamanho + 1]; 
    cout << "Digite os elementos do array:\n";
    for (int i = 0; i < tamanho; i++) {
        cin >> array[i];
    }
    
    cout << "Digite o elemento a ser inserido: ";
    cin >> elemento;
    cout << "Digite a posição onde o elemento será inserido (0 a " << tamanho << "): ";
    cin >> posicao;

    if (posicao < 0 || posicao > tamanho) {
        cout << "Posição inválida!" << endl;
        return 1;
    }
    for (int i = tamanho; i > posicao; i--) {
        array[i] = array[i - 1];
    }
    array[posicao] = elemento;
    cout << "O novo array é:\n";
    for (int i = 0; i <= tamanho; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}

