#include "ship.h"
#include <iostream>
using namespace std;
ship::ship()
{
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ (��� ������ ship)" << endl << endl;
}
ship::~ship()
{
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� (��� ������ ship)" << endl << endl;
}