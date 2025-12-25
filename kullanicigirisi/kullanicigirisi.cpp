#include <iostream>
using namespace std;
int main() {

	string kullaniciAdi, sifre;
	cout << "kullanici adi giriniz: ";
	cin >> kullaniciAdi; 
	cout << endl;
	cout << "sifre giriniz: ";
    cin >> sifre;
	if (kullaniciAdi == "Admin" && sifre == "1234") {
		cout << "gýris baþarýlý";
	}else{
		cout << "giriþ hatalý";
	
	
	}




	return 0;
}
