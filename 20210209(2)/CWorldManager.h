#pragma once
#include <conio.h>
#include "CBPosition.h"
#include "CCPosition.h"

class CWorldManager
{
public:
	CWorldManager();
	CWorldManager(const int worldScaleX, const int worldScaleY, CBPosition CBP, CCPosition CCP);
	~CWorldManager();
private:
	int worldScaleX;
	int worldScaleY;
	CBPosition CBP;
	CCPosition CCP;
public:
	bool MeetBCheck(const int positionX, const int positionY);
	CBPosition GetCBP();
	CCPosition GetCCP();
};

