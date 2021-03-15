#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

#define IndexForUse 100

using namespace std;

class CBPosition
{
public:
	CBPosition();
	CBPosition(int wX, int wY);
	~CBPosition();
private:
	int BPositionX[IndexForUse];
	int BPositionY[IndexForUse];
	int worldScaleX;
	int worldScaleY;
public:
	void CurBPosition(int& i, int& j);
	void SetBPosition();
	int GetBPositionX(int a);
	int GetBPositionY(int a);
};

