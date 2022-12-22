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
