// 029 Bubble Sort

#include <iostream>
using namespace std;

int array[20];
int n;

void input() {

	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\rArray dapat mempunyai maksimal 20 elemen.\n";              //output ke layar
		}
	}
	cout << endl;                                    //output baris kosong
	cout << "===============" << endl;               //output ke layar
	cout << "Masukkan Elemen Array" << endl;         //output ke layar
	cout << "===============" << endl;               //output ke layar

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> array[i];

	}
}