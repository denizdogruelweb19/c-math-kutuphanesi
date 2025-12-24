#include <iostream>
using namespace std;
int main() {
	int sayi1, sayi2, sonuc, islem;
	cout << "sayi1 giriniz:";
	cin >> sayi1;
	cout << endl;
	cout << "sayi2 giriniz:";
	cin >> sayi2;
	cout << endl;
	cout << "islem giriniz:"<<"1:+,2:-,3:*,4:/";
	cout << endl;
	cin >> islem;
	cout << endl;
	if (islem == 1) {
		sonuc = sayi1 + sayi2;
		cout << "sonuc:" << sonuc;
	}
	else if (islem == 2) {
		sonuc = sayi1 - sayi2;
		cout << "sonuc: " << sonuc;
	}
	else if (islem == 3) {
		sonuc = sayi1 * sayi2;;
		cout << "sonuc: " << sonuc;

	}
	else if (islem == 4) {
		sonuc = sayi1 / sayi2;
		cout << "sonuc: " << sonuc;
	}





	return 0;
}