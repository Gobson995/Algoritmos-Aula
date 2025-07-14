#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;

  cout << "Quantos alunos tem?" << endl;

  cin >> c;

  double matriz[3][c];

  cout << "Escreva as notas (conforme ordem)" << endl;

  for (int i = 0; i < 3; i++) { 
      for (int j = 0; j < c; j++) { 
          cin >> matriz[i][j];
      }
  }

  int pfn,calc,agt;

  pfn = 0;
  calc = 0;
  agt = 0;

  int contadorpfn = 0;
  int contadorcalc = 0;
  int contadoragt = 0;

  for (int i = 0; i < 3; i++) { 
      for (int j = 0; j < c; j++) { 
        if (i == 0) {
          pfn += matriz[i][j];
          if (matriz[i][j] < 7) {
              contadorpfn++;
          }
          }
          else if (i == 1){
            calc += matriz[i][j];
            if (matriz[i][j] < 7) {
                contadorcalc++;
            }
          }
          else {
            agt += matriz[i][j];
            if (matriz[i][j] < 7) {
              contadoragt++;
            }
          }
      }
  }

  int mediapfn, mediacalc, mediaagt;

  mediapfn = pfn/c;
  mediacalc = calc/c;
  mediaagt = agt/c;

  if (mediapfn > mediacalc && mediapfn > mediaagt) {
    cout << "A média mais alta é de PFN" << endl;
  } 
  else if (mediapfn >= mediacalc && mediapfn > mediaagt){
    cout << "A média mais alta é de PFN e CALC" << endl;
  }
  else if (mediapfn > mediacalc && mediapfn >= mediaagt){
    cout << "A média mais alta é de PFN e AGT" << endl;
  }
  else if (mediacalc > mediapfn && mediacalc > mediaagt) {
    cout << "A média mais alta é de CALC" << endl;
  }
  else if (mediacalc > mediapfn && mediacalc >= mediaagt) {
    cout << "A média mais alta é de CALC e AGT" << endl;
  }
  else {
    cout << "A média mais alta é de AGT" << endl;
  }


  if (contadorpfn > contadorcalc && contadorpfn > contadoragt) {
    cout << "A matéria com mais alunos no exame final é PFN" << endl;
  }
  else if (contadorpfn >= contadorcalc && contadorpfn > contadoragt) {
    cout << "A matéria com mais alunos no exame final é PFN e CALC" << endl;
  }
  else if (contadorpfn > contadorcalc && contadorpfn >= contadoragt) {
    cout << "A matéria com mais alunos no exame final é PFN e AGT" << endl;
  }
  else if (contadorcalc > contadorpfn && contadorcalc > contadoragt) {
    cout << "A matéria com mais alunos no exame final é CALC" << endl;
  }
  else if (contadorcalc > contadorpfn && contadorcalc >= contadoragt) {
    cout << "A matéria com mais alunos no exame final é CALC e AGT" << endl;
  }
  else {
    cout << "A matéria com mais alunos no exame final é AGT" << endl;
  }
}