#include "ship.h"
#include <iostream>
using namespace std;
ship::ship()
{
	setlocale(LC_ALL, "Russian");
	cout << "Вызов конструктора (для класса ship)" << endl << endl;
}
ship::~ship()
{
	setlocale(LC_ALL, "Russian");
	cout << "Вызов деструктора (для класса ship)" << endl << endl;
}