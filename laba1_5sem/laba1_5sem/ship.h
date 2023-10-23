#pragma once
#include <fstream>
#include "ship.h"
#include "keeper.h"
using namespace std;
class Ship
{
public:
	Ship();
	virtual ~Ship();
	virtual void setVal() = 0;
};
