#include <bits/stdc++.h>

using namespace std;

int exame (double v[], int TAMANHOVETOR) {
  int somanota = 0;
    for (int i = 0; i < TAMANHOVETOR; i++) {
      cin >> v[i];
      somanota += v[i];
    }
  
  int medianota;
    
  medianota = somanota/TAMANHOVETOR;

  if (medianota < 7) {
    return 0;
  }
  else {
    return 1;
  }
}


int main() {
  int TAMANHOVETOR;

  cout << "Quantas notas esse aluno possui?" << endl;

  cin >> TAMANHOVETOR;

  cout << "Digite as notas desse aluno:" << endl; 
  
  double v[TAMANHOVETOR];

  if (exame(v,TAMANHOVETOR) == 0) {
    cout << "Pegou exame" << endl;
  }
  else {
    cout << "Passou direto" << endl;
  }
}