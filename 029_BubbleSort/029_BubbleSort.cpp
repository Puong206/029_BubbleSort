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
void BubbleShortArray() {             // prosedur untuk mengurutkan array dengan metode bubble sort
	int pass = 1;                     // step 1

	do {
		for (int j = 0; j <= n - 1 - pass; j++) {          //step 2
			if (array[j] > array[j + 1]) {                 //step 3
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		pass = pass + 1;                                   //step 4

		cout << "\nPass " << pass - 1 << "; ";             //output ke layar
		for (int k = 0; k < n; k++) {
			cout << array[k] << " ";
		}
		cout << endl;
	} while (pass <= n - 1);                               //step 5
}
void display() {

	cout << endl;
	cout << "==================================" << endl;
	cout << "Element Array Yang Telah Tersusun" << endl;
	cout << "==================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << array[j];
		if (j < n < 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}
int main() {
	input();                                                //call the input function to get user input
	BubbleShortArray();                                     //call the selection sort function
	display();                                              //display the sorted array
	system("pause");

	return 0;
}