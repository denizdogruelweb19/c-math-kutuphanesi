#include <iostream>
using namespace std;
int main() {

	int gun;
	cout << "gun giriniz: ";
	cin >> gun;

	switch (gun) {
	case 1:
		cout << "pazartesi" << endl;
		break;
	case 2:
		cout << "sali" << endl;
		break;
	case 3:
		cout << "carsamba" << endl;
		break;
	case 4:
		cout << "persembe" << endl;
		break;
	case 5:
		cout << "cuma" << endl;
		break;
	default: 
		cout << "hatalý giriþ yaptýnýz";
		break;


	}

	return 0;
}