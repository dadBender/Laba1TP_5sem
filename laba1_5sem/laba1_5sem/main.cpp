#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	int button;
	bool flag = true; 
		while (flag) {
			system("cls"); 
			cout << "����: " << endl << endl;
			cout << "1 - " << endl;
			cout << "2 - " << endl;
			
			cout << "�������� �����: ";
			cin >> button;
			if (cin.fail()) { 
				button = -1;
				cin.clear();
				cin.ignore(10000, '\n');
			}
			switch (button) {
			case 1:
				
				
					break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				flag = false; 
				cout << "\n�����" << endl;
				break;
			default:
				cout << endl << "������������ ������, ������� ������)" << endl
					<< endl; 
				
				break;
			}
		}
	return 0;
}
