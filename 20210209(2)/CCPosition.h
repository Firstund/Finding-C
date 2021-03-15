#pragma once
#include "CBPosition.h"

class CCPosition
{
public:
	CCPosition();
	CCPosition(int wX, int wY, CBPosition CBP);
	~CCPosition();
private:
	int CPositionX;
	int CPositionY;
	int worldScaleX;
	int worldScaleY;
	CBPosition CBP;
public:
	void CurCPosition(int& i, int& j);
	void SetCPosition();
	bool CPBPPositionCheck();
	int GetCPositionX();
	int GetCPositionY();
};

