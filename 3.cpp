#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, s1, n, m1, s2, s3, s4, m4, s5, s6, s7;//s1-��������,s2- ����� ����� , s3- ������� �����,s4- ������ ,s5- �����,s6- �������,s7- �������.
	cin >> a;
	if (a == 10000000) cout << "������ ���������";
	n = a;
	if (a >= 1000000) {
		s1 = n / 1000000;
		switch (s1) {
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
		}
		m1 = s1;
		switch (m1) {
		case 1: cout << "������� ";
			break;
		case 2: case 3: case 4: cout << "�������� ";
			break;
		case 5: case 6: case 7: case 8: case 9: cout << "��������� ";
			break;
		}
		n -= s1 * 1000000;
	}
	if (n >= 100000) {
		s2 = n / 100000;
		switch (s2) {
		case 1: cout << "��� ";
			break;
		case 2: cout << "������ ";
			break;
		case 3: cout << "������ ";
			break;
		case 4: cout << "��������� ";
			break;
		case 5: cout << "������� ";
			break;
		case 6: cout << "�������� ";
			break;
		case 7: cout << "������� ";
			break;
		case 8: cout << "��������� ";
			break;
		case 9: cout << "��������� ";
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
			case 0: cout << "������";
				break;
			}
			cout << "����� ";
			break;
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
			case 0: cout << "";
				break;
			}
			switch (m4) {
			case 1: cout << "������ ";
				break;
			case 2: case 3: case 4: cout << "������ ";
				break;
			case 5: case 6: case 7: case 8: case 9:  case 0: cout << "����� ";
				break;
			}
		}
		n -= s4 * 1000;
	}
	if (n >= 100) {
		s5 = n / 100;
		switch (s5) {
		case 1: cout << "��� ";
			break;
		case 2: cout << "������ ";
			break;
		case 3: cout << "������ ";
			break;
		case 4: cout << "��������� ";
			break;
		case 5: cout << "������� ";
			break;
		case 6: cout << "�������� ";
			break;
		case 7: cout << "������� ";
			break;
		case 8: cout << "��������� ";
			break;
		case 9: cout << "��������� ";
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
			case 0: cout << "������";
				break;
			} break;
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
		case 0: cout << "";
			break;
		}
		n -= s6 * 10;
	}


	if (n >= 1) {
		s7 = n;
		if (s6 != 1) {
			switch (s7) {
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
			case 0: cout << "";
				break;
			}
		}
	}
	return 0;
}