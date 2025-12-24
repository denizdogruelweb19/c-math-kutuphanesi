#include <iostream>
using namespace std;
int main() {

	string sifre;
	cout << "sifre giriniz: ";
	cin >> sifre;
	cout << "sifre belirlendi";
	cout << endl;
	string denemesifre;
	cout << "deneme sifre giriniz: ";
	cin >> denemesifre;
		if(sifre==denemesifre){
			cout << "sifre doðru";
		}
		else {
			cout << "sifre yanlýs";
		}

	return 0;
}