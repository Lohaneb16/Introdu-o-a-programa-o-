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
                cout << nome << " vai pra excurs�o!" << endl;
            } else {
                cout << nome << " n�o vai pra excurs�o!" << endl;
            }
            break; 
        }
    }
    
    if (!encontrado) {
        cout << nome << " n�o est� na lista." << endl;
    }
    
    return 0;
}

