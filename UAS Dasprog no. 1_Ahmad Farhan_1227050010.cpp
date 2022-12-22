#include <iostream>
using namespace std;

int main(){
	int i, j, b, k, matriks[20][20], transpose[20][20];
  
  cout << "Ahmad Farhan \n";
  cout << "1227050010 \n";
  cout << "UAS NOMOR 1 DASAR PEMROGRAMAN (Transpose matriks)\n";
  cout << "========================================= \n\n";

  cout << "Masukkan jumlah baris matriks: ";
  cin >> b;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> k;
  cout << endl;

  cout << "Masukkan elemen matriks \n";
  for (i = 0; i < b; i++) {
    for (j = 0; j < k; j++) {
      cout << "Nilai baris ke-" << i+1 << " kolom ke-" << j+1 << " = " ;
	  cin  >> matriks[i][j];
    }
  }
  cout << "\n";

  cout << "Matriks Awal : \n";
  for (i = 0; i < b; i++){
    for (j = 0; j < k; j++){
      cout << matriks[i][j] << "\t";
    }
    cout << endl;
  }
  
  
  for (i = 0; i < b; i++){
    for (j = 0; j < k; j++){
      transpose[j][i] = matriks[i][j];
    }
  }

  cout << "Hasil Matriks (Transpose): \n";
  for (i = 0; i < k; i++){
    for (j = 0; j < b; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
}
