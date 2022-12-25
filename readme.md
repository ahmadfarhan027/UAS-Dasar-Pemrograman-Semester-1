# Ujian Akhir Semester 
<br> Mata Kuliah &ensp; &ensp;: Dasar Pemrograman
<br> Nama &emsp;&emsp;&emsp;&emsp;: Ahmad Farhan
<br> NIM &emsp;&emsp;&emsp;&emsp; &ensp;: 1227050010
<br> Jurusan &emsp;&emsp; &ensp; &nbsp;: [Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Ujian Akhir Semester 1 Dasar Pemrograman terdiri dari 2 soal program :
<br> Nomor 1 <br>
Program Nomor 1 merupakan program array 2 dimensi dengan tujuan membalik Nilai Matriks (Transpos) yang di telah inputkan. Artinya nilai kolom pada matriks tersebut akan diubah menjadi nilai baris pada matriks itupula-, begitupun sebaliknya (kolom jadi baris; baris jadi kolom). Selain itu, banyak kolom dan baris bisa di inputkan dengan batas 0-20. 
<br> Nomor 2 <br>
Pada Program Nomor 2 ialah jenis program array 2 dimensi dengan maksud menampilkan output deret matematika dari matriks yang di inputkan dengan syarat bilangan output yang ditampilkan merupakan bilangan yang tidak habis dibagi 3, 5, dan 7. Banyak kolom dan baris yang  diinputkan dengan batas 0-20 baris/kolom. 
## Source Code
Nomor 1
```cpp
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
```
Nomor 2
```cpp
#include <iostream>
using namespace std;

int main() {
	int i,j, array[20][20], baris, kolom;
	    
	cout << "Ahmad Farhan \n";
	cout << "1227050010 \n";
	cout << "UAS NOMOR 2 DASAR PEMROGRAMAN (tidak habis dibagi 3,5,7)\n";
	cout << "========================================= \n\n";

	cout << "Masukkan jumlah baris matriks: ";
	cin >> baris;
	cout << "Masukkan jumlah kolom matriks: ";
	cin >> kolom;
	cout << endl;
    
    cout << "Masukkan elemen matriks \n";
	for (i = 0; i < baris; i++) {
    	for (j = 0; j < kolom; j++) {
			cout << "Nilai baris ke-" << i+1 << " kolom ke-" << j+1 << " = " ;
			cin  >> array[i][j];
    	}
	}
	cout << "\n";


    cout << "Nilai matriks awal :" << endl;
    for(int i = 0; i < baris ;i++){
        for(int j = 0; j < kolom ;j++){
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Nilai matriks akhir :" << endl;
    for(int i = 0; i < baris ;i++){
            for(int j = 0; j < kolom ;j++){
                if(array[i][j]%3 != 0 && array[i][j]%5 != 0 && array[i][j]%7 != 0){
                    cout << array[i][j] << "\t";
                }
                else{
                }
            }
    }
    return 0;
}
```
## Output
<br> Nomor 1 <br>
<img src= "https://github.com/ahmadfarhan027/UAS-Dasar-Pemrograman-Semester-1/blob/main/Output%20No.1.png">
<br> Nomor 2 <br>
<img src= "https://github.com/ahmadfarhan027/UAS-Dasar-Pemrograman-Semester-1/blob/main/Output%20No.2.png">
