#include <iostream>
using namespace std;

int main() {
	int bolunen, bolen;

	cout << "Bolunen sayiyi girin: ";
	cin >> bolunen;

	cout << "Bolen sayiyi girin: ";
	cin >> bolen;

	if (bolen != 0) {
		int bolum = bolunen / bolen;
		int kalan = bolunen % bolen;

		cout << "Bolum: " << bolum << endl;
		cout << "Kalan: " << kalan << endl;

	}
	else {
		cout << "Bolen sifir olamaz!";
	}

	return 0;
}