#include <iostream>
#include <string>
using namespace std;

int main() {
    const int tamanho = 5;
    string alunos[tamanho] = {"joao", "maria", "jose", "carlos", "claudio"};
    bool vaiPraExcursao[tamanho] = {true, true, false, true, false};
    
    string nome;
    cout << "Digite o nome do aluno: ";
    cin >> nome;
    bool encontrado = false;
    for (int i = 0; i < tamanho; i++) {
        if (alunos[i] == nome) {
            encontrado = true;
            if (vaiPraExcursao[i]) {
                cout << nome << " vai pra excursão!" << endl;
            } else {
                cout << nome << " não vai pra excursão!" << endl;
            }
            break; 
        }
    }
    
    if (!encontrado) {
        cout << nome << " não está na lista." << endl;
    }
    
    return 0;
}

