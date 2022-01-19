#include <iostream>
using namespace std;

void Hasil (int x, int y){
    if (x==1) {
        if (y>=18){
            cout << "Cukup Umur";
        }
        else{
            cout << "Belum Cukup Umur";
        }
    }
    else {
        if (y>=18){
            cout << "Cukup Umur";
        }
        else{
            cout << "Belum Cukup umur"<<endl;
      }
   }
}

int main(){
    int umur, kel, harga, jumlah,total;

 	cout << "================================" <<endl;
    cout << "	-Daftar Film-" <<endl;
    cout << "================================" <<endl;
    cout <<endl;
	cout << "1. SPIDERMAN" <<endl;
    cout << "2. LAYANGAN PUTUS" <<endl;
    cout <<endl;
    cout << "================================" <<endl;
    
    cout << "Masukan Pilihan Anda (1-2) : "; cin >> kel;
    cout << "================================" <<endl;

    cout << "Masukan Umur Anda : "; cin >> umur;
    cout << "================================" <<endl;

    Hasil(kel,umur);
    if(umur < 18){
    	cout <<endl;
    	cout <<endl;
    	cout<<"ANDA TIDAK BISA MEMBELI TIKET";
	}
	else{
		cout <<endl;
		cout <<endl;
		cout << "Jumlah Tiket : "; cin >> jumlah;
    	cout << "================================" <<endl;
    	harga=50000;
    	cout <<"Harga Tiket : "<< harga<<endl;
    	total=jumlah*harga;
    	cout <<"Total Harga : "<<total<<endl;
    	cout << "================================" <<endl;
	}
	

   
	
}


