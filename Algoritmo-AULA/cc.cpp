int maior(int a, int b){
    if(a > b){
      return a;
    }else{
      return b;
    }

}


#include <iostream>
using namespace std;

int main() {
    // Declaração da matriz com 2 linhas e 3 colunas
    int matriz[2][3];

    // Preenchendo a matriz com valores
    cout << "Digite os valores da matriz 2x3:" << endl;
    for (int i = 0; i < 2; i++) { // para cada linha
        for (int j = 0; j < 3; j++) { // para cada coluna
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Exibindo a matriz
    cout << "\nMatriz digitada:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl; // quebra de linha após cada linha da matriz
    }

    return 0;
}


int n,m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int> (m));

    for(int i = 0;i < n;i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0; j < m; j++){
            cout << mat[i][j] << " ";
        }
       cout << endl;
    }