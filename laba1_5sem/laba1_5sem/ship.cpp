#include "ship.h"
#include <iostream>
using namespace std;
ship::ship()
{

	cout << "Вызов конструктора (Абстрактный класс)" << endl << endl;
}
ship::~ship()
{
	cout << "Вызов деструктора (Абстрактный класс)" << endl << endl;
}