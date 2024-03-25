// UCP 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// algoritma insertion sort membandingkan elemen dengan cara membandingkan dan mengurutkan dua data pertama pada array kemudian membandingkan data pada array berikutnya apakah sudah berada di tempat semestinya
//algoritma selection sort membandingkan min index dengan data setelahnya, jika index lebih besar dari data setelahnya maka data ditukar
// Untuk mengetahui jumlah langkah yang dilakukan dengan cara menentukan min index 
#include <iostream>
using namespace std;

int n;
int arr[11];

void input() {
	while (true) {
		cout << "masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 11)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 11 elemen. \n";

		}
	}
	cout << endl;
	cout << "===============" << endl;
	cout << "masukkan Elemen Array" << endl;
	cout << "===============" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> arr[i];

	}

}
void insertionSort(int via) {
	int i, j, temp;

	for (i = 0; i <= n - 2; i++) {//step 1
		temp = j; // step 2

		j = i - 1;//step 3

		while (j < 0 && arr[j] > temp)// step 4
		{
			arr[j + 1] = arr[j]; //step 4a
			j--; //step 4b
		}

		arr[j + 1] = temp;//step 5
	}
}

void display() {
	cout << endl;
	cout << "===================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "===================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j]; // menampilkan array
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;

	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
	cout << endl;
}


int main()
{
	int main()
		input();
		insertionSort();
		display();
		system("pause");
		return 0;


}

