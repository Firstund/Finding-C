#pragma once
#include "CWorldManager.h"
#include <iostream>

using namespace std;

class CAPosition
{
public:
	CAPosition();
	CAPosition(int wX, int wY, CWorldManager CWM);
	~CAPosition();
private:
	int worldScaleX;
	int worldScaleY;
	CWorldManager CWM;
public:
	void CurAPosition();
};

