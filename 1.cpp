#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	if (a > 99 && a < 1000)
		cout << "число трехзначное";
	else
		cout << "Число не трехзначное";


	return 0;
}