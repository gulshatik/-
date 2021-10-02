#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, s1, n, m1, s2, s3, s4, m4, s5, s6, s7;//s1-миллионы,s2- сотни тысяч , s3- десятки тысяч,s4- тысячи ,s5- сотни,s6- десятки,s7- единицы.
	cin >> a;
	if (a == 10000000) cout << "Десять миллионов";
	n = a;
	if (a >= 1000000) {
		s1 = n / 1000000;
		switch (s1) {
		case 1: cout << "Один ";
			break;
		case 2: cout << "Два ";
			break;
		case 3: cout << "Три ";
			break;
		case 4: cout << "Четыре ";
			break;
		case 5: cout << "Пять ";
			break;
		case 6: cout << "Шесть ";
			break;
		case 7: cout << "Семь ";
			break;
		case 8: cout << "Восемь ";
			break;
		case 9: cout << "Девять ";
			break;
		}
		m1 = s1;
		switch (m1) {
		case 1: cout << "миллион ";
			break;
		case 2: case 3: case 4: cout << "миллиона ";
			break;
		case 5: case 6: case 7: case 8: case 9: cout << "миллионов ";
			break;
		}
		n -= s1 * 1000000;
	}
	if (n >= 100000) {
		s2 = n / 100000;
		switch (s2) {
		case 1: cout << "сто ";
			break;
		case 2: cout << "двести ";
			break;
		case 3: cout << "триста ";
			break;
		case 4: cout << "четыреста ";
			break;
		case 5: cout << "пятьсот ";
			break;
		case 6: cout << "шестьсот ";
			break;
		case 7: cout << "семьсот ";
			break;
		case 8: cout << "восемьсот ";
			break;
		case 9: cout << "девятьсот ";
			break;
		case 0: cout << "";
			break;
		}
		n -= s2 * 100000;
	}
	if (n >= 10000) {
		s3 = n / 10000;
		switch (s3) {
		case 1:
			n -= s3 * 10000;
			s4 = n / 1000;
			switch (s4) {
			case 1: cout << "одиннадцать ";
				break;
			case 2: cout << "двенадцать ";
				break;
			case 3: cout << "тринадцать ";
				break;
			case 4: cout << "четырнадцать ";
				break;
			case 5: cout << "пятьнадцать ";
				break;
			case 6: cout << "шестнадцать ";
				break;
			case 7: cout << "семнадцать ";
				break;
			case 8: cout << "восемнадцать ";
				break;
			case 9: cout << "девятнадцать ";
				break;
			case 0: cout << "десять";
				break;
			}
			cout << "тысяч ";
			break;
		case 2: cout << "двадцать ";
			break;
		case 3: cout << "тридцать ";
			break;
		case 4: cout << "сорок ";
			break;
		case 5: cout << "пятьдесят ";
			break;
		case 6: cout << "шестьдесят ";
			break;
		case 7: cout << "семьдесят ";
			break;
		case 8: cout << "восемьдесят ";
			break;
		case 9: cout << "девяносто ";
			break;
		case 0: cout << "";
			break;
		}
		n -= s3 * 10000;
	}


	if (n >= 1000) {
		s4 = n / 1000;
		m4 = s4;
		if (s3 != 1) {
			switch (s4) {
			case 1: cout << "одна ";
				break;
			case 2: cout << "две ";
				break;
			case 3: cout << "три ";
				break;
			case 4: cout << "четыре ";
				break;
			case 5: cout << "пять ";
				break;
			case 6: cout << "шесть ";
				break;
			case 7: cout << "семь ";
				break;
			case 8: cout << "восемь ";
				break;
			case 9: cout << "девять ";
				break;
			case 0: cout << "";
				break;
			}
			switch (m4) {
			case 1: cout << "тысяча ";
				break;
			case 2: case 3: case 4: cout << "тысячи ";
				break;
			case 5: case 6: case 7: case 8: case 9:  case 0: cout << "тысяч ";
				break;
			}
		}
		n -= s4 * 1000;
	}
	if (n >= 100) {
		s5 = n / 100;
		switch (s5) {
		case 1: cout << "сто ";
			break;
		case 2: cout << "двести ";
			break;
		case 3: cout << "триста ";
			break;
		case 4: cout << "четыреста ";
			break;
		case 5: cout << "пятьсот ";
			break;
		case 6: cout << "шестьсот ";
			break;
		case 7: cout << "семьсот ";
			break;
		case 8: cout << "восемьсот ";
			break;
		case 9: cout << "девятьсот ";
			break;
		case 0: cout << "";
			break;
		}
		n -= s5 * 100;
	}
	if (n >= 10) {
		s6 = n / 10;
		switch (s6) {
		case 1:
			n -= s6 * 10;
			s7 = n;
			switch (s7) {
			case 1: cout << "одиннадцать ";
				break;
			case 2: cout << "двенадцать ";
				break;
			case 3: cout << "тринадцать ";
				break;
			case 4: cout << "четырнадцать ";
				break;
			case 5: cout << "пятьнадцать ";
				break;
			case 6: cout << "шестнадцать ";
				break;
			case 7: cout << "семнадцать ";
				break;
			case 8: cout << "восемнадцать ";
				break;
			case 9: cout << "девятнадцать ";
				break;
			case 0: cout << "десять";
				break;
			} break;
		case 2: cout << "двадцать ";
			break;
		case 3: cout << "тридцать ";
			break;
		case 4: cout << "сорок ";
			break;
		case 5: cout << "пятьдесят ";
			break;
		case 6: cout << "шестьдесят ";
			break;
		case 7: cout << "семьдесят ";
			break;
		case 8: cout << "восемьдесят ";
			break;
		case 9: cout << "девяносто ";
			break;
		case 0: cout << "";
			break;
		}
		n -= s6 * 10;
	}


	if (n >= 1) {
		s7 = n;
		if (s6 != 1) {
			switch (s7) {
			case 1: cout << "один ";
				break;
			case 2: cout << "два ";
				break;
			case 3: cout << "три ";
				break;
			case 4: cout << "четыре ";
				break;
			case 5: cout << "пять ";
				break;
			case 6: cout << "шесть ";
				break;
			case 7: cout << "семь ";
				break;
			case 8: cout << "восемь ";
				break;
			case 9: cout << "девять ";
				break;
			case 0: cout << "";
				break;
			}
		}
	}
	return 0;
}