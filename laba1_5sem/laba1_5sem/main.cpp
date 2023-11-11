#include <iostream>
#include "keeper.h"
#include "ship.h"
#include "submarine.h"
#include "boats.h"
#include "menu.h"
#include "sailboat.h"

/*����� ������� ������ ������ � ��������� ������, ���������� � �������.

��� ��������� ����� ����������: �����, ������, ������, ����� ������������
���������� ��� �����, ������������ ��������� ��������, ������������
��������� ��������, ����������.

��� ��������� ����������: ��� ���������, ��������, ������ ��� �������,
����� �������, �������� �����������, ������.

��� ������ ����������: ����������, �������� �������, ������� ��������,
�������� � ���������� �����, ������� ����� ��������� �� �����.
*/

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	Keeper <Submarine> submarine;
	Keeper <boats> boats;
	Keeper <Sailboat> sailboat;

	int button;
	bool flag = true; // ��� �������� ���������� ������� (���� ���������), ��� ����������� - ��� � ����
	while (flag) {
		system("cls"); // ���� �����, ����� ���� ������� �� ���������
		cout << "����: " << endl << endl;
		cout << "1 - ��������� �����" << endl;
		cout << "2 - ��������" << endl;
		cout << "3 - �����" << endl;
		cout << "4 - ����� �� ���������" << endl << endl;
		cout << "�������� �����: ";
		cin >> button;
		if (cin.fail()) { // �������� �� ���������� ����
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		switch (button) {
		case 1:
			menu(submarine, "submarine.txt"); // ����� ���� (������)

			break;
		case 2:
			menu(sailboat, "sailboat.txt"); // ����� ���� (��������)
			break;
		case 3:
			menu(boats, "boats.txt"); // ����� ���� (������)
			break;
		case 4:
			flag = false; // ����� �� ���������
			cout << "\n�����" << endl;
			break;
		default:
			cout << endl << "������������ ������, ������� ������!" << endl
				<< endl; // �������� �� ���������� ����
			system("pause");
			break;
		}
	}
	return 0;
}