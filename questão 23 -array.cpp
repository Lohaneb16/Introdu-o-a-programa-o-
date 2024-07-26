#include <iostream>
using namespace std;

int main() {
    int tamanho1, tamanho2;

    cout << "Digite o número de elementos no primeiro array: ";
    cin >> tamanho1;
    double array1[tamanho1];

    cout << "Digite os elementos do primeiro array:\n";
    for (int i = 0; i < tamanho1; i++) {
        cin >> array1[i];
    }

    cout << "Digite o número de elementos no segundo array: ";
    cin >> tamanho2;
    double array2[tamanho2];

    cout << "Digite os elementos do segundo array:\n";
    for (int i = 0; i < tamanho2; i++) {
        cin >> array2[i];
    }
    int tamanho3 = tamanho1 + tamanho2;
    double array3[tamanho3];

    for (int i = 0; i < tamanho1; i++) {
        array3[i] = array1[i];
    }
    for (int i = 0; i < tamanho2; i++) {
        array3[tamanho1 + i] = array2[i];
    }

    cout << "O novo array resultante é:\n";
    for (int i = 0; i < tamanho3; i++) {
        cout << array3[i] << " ";
    }
    cout << endl;

    return 0;
}

