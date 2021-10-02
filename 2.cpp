#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int mounth, day, counter = 0, s, d, e;/*mounth - номер мес€ца, day - число, counter - счетчик дней, s - сотни, d - дес€тки, e - единицы*/
	cout << "введите номер мес€ца" << endl;
	cin >> mounth;
	if (mounth < 1 || mounth>12) cout << "¬ведена некорректна€ дата";
	else {
		cout << "введите число" << endl;
		cin >> day;
		if (day < 1) cout << "¬ведена некорректна€ дата";
		else { /*ѕровер€ем верна€ ли дата, если да - считаем сколько дней осталось в текущем мес€це*/
			int day_check = mounth;
			switch (day_check) {
			case 1: case 3:case 5:case 7:case 8:case 10:case 12:
				if (day > 31) {
					cout << "¬ведена некорректна€ дата";
					return 0;
				}
				else  counter = 31 - day;
				break;
			case 2:
				if (day > 28) {
					cout << "¬ведена некорректна€ дата";
					return 0;
				}
				else counter = 28 - day;
				break;
			case 4: case 6: case 9: case 11:
				if (day > 30) {
					cout << "¬ведена некорректна€ дата";
					return 0;
				}
				else counter = 30 - day;
				break;
			}
			mounth += 1;
			for (int n = mounth;n <= 12;n++) {/*—читаем сколько всего дней осталость до нового года*/
				switch (n) {
				case 1: case 3:case 5:case 7:case 8:case 10:case 12:
					counter += 31;
					break;
				case 2:
					counter += 28;
					break;
				case 4: case 6: case 9: case 11:
					counter += 30;
					break;
				}
			}
			cout << "ƒо нового года ";
			if (counter == 0) cout << "ноль дней";
			int n = counter;
			if (n >= 100) { /*выводим сотни*/
				s = n / 100;
				switch (s) {
				case 1: cout << "сто ";
					break;
				case 2: cout << "двести ";
					break;
				case 3: cout << "триста ";
					break;
				}
				n -= s * 100;
			}
			if (n >= 10) { /*выводим дес€тки*/
				d = n / 10;
				switch (d) {
				case 1:
					n -= d * 10;
					e = n;
					switch (e) {
					case 1: cout << "одиннадцать ";
						break;
					case 2: cout << "двенадцать ";
						break;
					case 3: cout << "тринадцать ";
						break;
					case 4: cout << "четырнадцать ";
						break;
					case 5: cout << "п€тьнадцать ";
						break;
					case 6: cout << "шестнадцать ";
						break;
					case 7: cout << "семнадцать ";
						break;
					case 8: cout << "восемнадцать ";
						break;
					case 9: cout << "дев€тнадцать ";
						break;
					case 0: cout << "дес€ть ";
						break;
					} cout << "дней"; break;
				case 2: cout << "двадцать ";
					break;
				case 3: cout << "тридцать ";
					break;
				case 4: cout << "сорок ";
					break;
				case 5: cout << "п€тьдес€т ";
					break;
				case 6: cout << "шестьдес€т ";
					break;
				case 7: cout << "семьдес€т ";
					break;
				case 8: cout << "восемьдес€т ";
					break;
				case 9: cout << "дев€носто ";
					break;
				case 0: cout << "дней";
					break;
				}
				n -= d * 10;
			}
			if (n >= 0) { /* выводим единицы*/
				e = n;
				switch (e) {
				case 1: cout << "один ";
					break;
				case 2: cout << "два ";
					break;
				case 3: cout << "три ";
					break;
				case 4: cout << "четыре ";
					break;
				case 5: cout << "п€ть ";
					break;
				case 6: cout << "шесть ";
					break;
				case 7: cout << "семь ";
					break;
				case 8: cout << "восемь ";
					break;
				case 9: cout << "дев€ть ";
					break;
				case 0: cout << "дней ";
					break;

				}
				switch (n) {
				case 1: cout << "день";
					break;
				case 2: case 3: case 4: cout << "дн€";
					break;
				case 5:case 6:case 7:case 8:case 9: cout << "дней";
					break;
				}

			}

		}
	}

	return 0;
}