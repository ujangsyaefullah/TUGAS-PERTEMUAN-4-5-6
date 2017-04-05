#include <iostream>

using namespace std;

int n;

int faktorial (int n);

int main() {
	
	cout << "Nama     : Ujang Saepulloh" <<endl;
	cout << "NIM      : 16 111 270" <<endl;
	cout << "Kelas    : TIF RM 16C" <<endl<<endl;
	cout << "===============================" <<endl<<endl;
	cout << "----MENCARI NILAI FAKTORIAL----"<<endl<<endl;
	cout << "-------------------------------" <<endl;
	
	cout << "Masukan Angka : "; cin >> n;
	
	cout << "-------------------------------" <<endl<<endl;
	cout << faktorial(n);
	return 0;
}

int faktorial (int n) {
	int hasil = 1;
	cout << "Nilai Faktorialnya Adalah : " <<endl<<endl;
	for (int a=n; a!=0; a--) {
		cout << a;
		hasil = hasil * a;
		if (a!=1)
			cout << " x ";
		else cout << " = ";
	}

return hasil;

}