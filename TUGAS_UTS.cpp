/*	TUGAS UTS NILAI MAKSIMUM DAN MINIMUM
*	NAMA UJANG SAEPULLOH 
* 	NIM. 16.111.270
*	KELAS TIF RM 16C 
*/	

#include <iostream>

using namespace std;

//Prototype
void PilihanA();
void PilihanB();

//Variable global
int angka, jumlah;

//Program utama
int main() {
	
		char pilihan;
		
		cout <<endl;
		cout <<"-------- MENCARI NILAI -------"<<endl;
		cout <<"---- MAXSIMUM DAN MINIMUM ----"<<endl<<endl;
		cout <<"=============================="<<endl<<endl;
		cout <<"Masukkan Jumlah Input Data : "; cin >> jumlah;
		cout << endl;
		cout <<"-------- PILIH PROSES --------"<<endl<<endl;
		cout <<"Keterangan :"<<endl<<endl;
		cout <<"1. Kode A Untuk Nilai Minimum"<<endl;
		cout <<"2. Kode B Untuk Nilai Maximum"<<endl<<endl;
		cout <<"------------------------------"<<endl<<endl;
		cout <<"Masukan Pilihan / Kode     : "; cin>>pilihan;
		cout << endl;
		cout <<"=============================="<<endl<<endl;
		
switch(pilihan)
		{
         case 'A' :
         case 'a' :
            PilihanA();
         break;
         case 'B' :
         case 'b' :
            PilihanB();
         break;
         default:
            cout <<"Maaf Anda Salah Memasukan Kode";
         break;
		}
	return 0;
}
//Proses Pilihan A	
		void PilihanA(){
			int min, jumin;
			jumin=0;
		
			for (int i = 1; i <= jumlah; i++) { //pengulangan nilai angka input
			
				cout << "Masukkan Nilai Angka       : "; cin >> angka;
				cout <<"------------------------------"<<endl;
				
				if (i == 1) { //Nilai data pertama menjadi nilai minimum
					min = angka;
				}
				else{}
			
				if (angka == min) { 
					jumin++;
				}
				else if (angka < min){ 
					min = angka;
			 		jumin = 1;
				}
				else {}
			}
			cout <<endl;
			cout <<"=============================="<< endl << endl;
			cout <<"-------- OUTPUT DATA ---------"<< endl << endl;
			cout << "Nilai Terkecil             : "<< min << endl;
			cout << "Jumlah Nilai Terkecil      : "<< jumin << endl;    
		}
		
//Proses Pilihan B		
		void PilihanB(){
			int max, jumax;
			jumax=0;
		
			for (int i = 1; i <= jumlah; i++) { //pengulangan nilai angka input
			
				cout << "Masukkan Nilai Angka       : "; cin >> angka;
				cout <<"------------------------------"<<endl;
				
				if (i == 1) { //Nilai data pertama menjadi nilai minimum
					max = angka;
				}
				else{}
			
				if (angka == max) { 
					jumax++;
				}
				else if (angka > max){ 
					max = angka;
					jumax = 1;
				}
				else {}
			}
			cout <<endl;
			cout <<"=============================="<<endl<<endl;
			cout <<"-------- OUTPUT DATA ---------"<<endl<<endl;
			cout << "Nilai Terbesar             : " <<  max << endl;
			cout << "Jumlah Nilai Terbesar      : " <<  jumax << endl;    
		}
		
		