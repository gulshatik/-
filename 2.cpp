#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int mounth, day, counter = 0, s, d, e;/*mounth - ����� ������, day - �����, counter - ������� ����, s - �����, d - �������, e - �������*/
	cout << "������� ����� ������" << endl;
	cin >> mounth;
	if (mounth < 1 || mounth>12) cout << "������� ������������ ����";
	else {
		cout << "������� �����" << endl;
		cin >> day;
		if (day < 1) cout << "������� ������������ ����";
		else { /*��������� ������ �� ����, ���� �� - ������� ������� ���� �������� � ������� ������*/
			int day_check = mounth;
			switch (day_check) {
			case 1: case 3:case 5:case 7:case 8:case 10:case 12:
				if (day > 31) {
					cout << "������� ������������ ����";
					return 0;
				}
				else  counter = 31 - day;
				break;
			case 2:
				if (day > 28) {
					cout << "������� ������������ ����";
					return 0;
				}
				else counter = 28 - day;
				break;
			case 4: case 6: case 9: case 11:
				if (day > 30) {
					cout << "������� ������������ ����";
					return 0;
				}
				else counter = 30 - day;
				break;
			}
			mounth += 1;
			for (int n = mounth;n <= 12;n++) {/*������� ������� ����� ���� ��������� �� ������ ����*/
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
			cout << "�� ������ ���� ";
			if (counter == 0) cout << "���� ����";
			int n = counter;
			if (n >= 100) { /*������� �����*/
				s = n / 100;
				switch (s) {
				case 1: cout << "��� ";
					break;
				case 2: cout << "������ ";
					break;
				case 3: cout << "������ ";
					break;
				}
				n -= s * 100;
			}
			if (n >= 10) { /*������� �������*/
				d = n / 10;
				switch (d) {
				case 1:
					n -= d * 10;
					e = n;
					switch (e) {
					case 1: cout << "����������� ";
						break;
					case 2: cout << "���������� ";
						break;
					case 3: cout << "���������� ";
						break;
					case 4: cout << "������������ ";
						break;
					case 5: cout << "����������� ";
						break;
					case 6: cout << "����������� ";
						break;
					case 7: cout << "���������� ";
						break;
					case 8: cout << "������������ ";
						break;
					case 9: cout << "������������ ";
						break;
					case 0: cout << "������ ";
						break;
					} cout << "����"; break;
				case 2: cout << "�������� ";
					break;
				case 3: cout << "�������� ";
					break;
				case 4: cout << "����� ";
					break;
				case 5: cout << "��������� ";
					break;
				case 6: cout << "���������� ";
					break;
				case 7: cout << "��������� ";
					break;
				case 8: cout << "����������� ";
					break;
				case 9: cout << "��������� ";
					break;
				case 0: cout << "����";
					break;
				}
				n -= d * 10;
			}
			if (n >= 0) { /* ������� �������*/
				e = n;
				switch (e) {
				case 1: cout << "���� ";
					break;
				case 2: cout << "��� ";
					break;
				case 3: cout << "��� ";
					break;
				case 4: cout << "������ ";
					break;
				case 5: cout << "���� ";
					break;
				case 6: cout << "����� ";
					break;
				case 7: cout << "���� ";
					break;
				case 8: cout << "������ ";
					break;
				case 9: cout << "������ ";
					break;
				case 0: cout << "���� ";
					break;

				}
				switch (n) {
				case 1: cout << "����";
					break;
				case 2: case 3: case 4: cout << "���";
					break;
				case 5:case 6:case 7:case 8:case 9: cout << "����";
					break;
				}

			}

		}
	}

	return 0;
}